#include "Scanner.h"
#include <regex>
#include <unistd.h>
#include <iostream>

Scanner::Scanner(std::ifstream& programFile, std::ifstream& tokensFile){
    this->program = fileToString(programFile);
    programFile.close();
    this->tokens = fileToVector(tokensFile);
    tokensFile.close();
}

std::vector<std::pair<tokenType, std::pair<int,int>>> Scanner::getPif(){
    return this->pif;
}

SymbolTable Scanner::getST(){
    return this->st;
}

std::vector<std::string> Scanner::getTokens(){
    return this->tokens;
}

std::string Scanner::fileToString(std::ifstream& file){
    std::string outputString;
    std::string var;
    while(std::getline(file, var)){
        outputString += var + "\n";
    }
    return outputString;
}

std::vector<std::string> Scanner::fileToVector(std::ifstream& file){
    std::vector<std::string> returnValue;
    std::string var;
    while(file >> var){
        returnValue.push_back(var);
    }
    return returnValue;
}

void Scanner::scan(){
    // Scan the next token, until the end of the file
    while (this->index < this->program.size()){
        this->nextToken();
    }
}

void Scanner::skipWhiteSpaces(){
    //Going to the next token
    while (this->index < this->program.size()){
        if (this->program[this->index] != ' ' && this->program[this->index] != 13 && this->program[this->index] != 10){
            this->tokenIndex++;
            return;
        }
        this->index++;
        if (this->program[this->index] == '\n'){
            this->rowNumber++;
            this->tokenIndex = 0;
        }
    }
}

void Scanner::nextToken(){
    //Skipping the white spaces to get to a token
    this->skipWhiteSpaces();

    //Checking if we are the end of the file
    if (this->index >= this->program.size())
        return;

    //Checking if the current token 
    if (this->treatIntConstant())
        return;
    if (this->treatBoolConstant())
        return;
    if (this->treatCharConstant())
        return;
    if (this->treatStringConstant())
        return;
    if (this->treatToken())
        return;
    if (this->treatIdentifier())
        return;

    throw std::string("Lexical Error: Not identified token at line: " + std::to_string(this->rowNumber) + ", token: " + std::to_string(this->tokenIndex));
}

bool Scanner::startsWith(std::string& b){
    return this->program.substr(this->index).find(b) == 0;
}

bool Scanner::treatToken(){
    //For every given token, check if its found
    for (int i=0; i<this->operatorIndex; i++){
        if (startsWith(this->tokens[i])){
            this->pif.push_back(std::make_pair(Operator, std::make_pair(i, -1)));
            this->index += this->tokens[i].size();
            return true;
        }
    }
    for (int i=this->operatorIndex; i<this->separatorIndex; i++){
        if (startsWith(this->tokens[i])){
            this->pif.push_back(std::make_pair(Separator, std::make_pair(i, -1)));
            this->index += this->tokens[i].size();
            return true;
        }
    }
    for (int i=this->separatorIndex; i<this->reservedWordIndex; i++){
        std::string wordBoundary = R"()\b)";
        std::string formStart = R"(^()";
        std::string formString = formStart+ this->tokens[i] + wordBoundary;
        std::regex form(formString);

        auto start = std::sregex_iterator(this->program.begin() + this->index, this->program.end(), form);
        auto end = std::sregex_iterator();

        if (start != end){
            auto match = *start;
            std::string element = match[1].str();

            this->pif.push_back(std::make_pair(ReservedWord, std::make_pair(i, -1)));
            this->index += this->tokens[i].size();
            return true;
        }
    }
    return false;
}

bool Scanner::treatIntConstant(){
    //Checking with regex if at current index, program starts with integer
    std::regex form("^([+-]?[1-9][0-9]*|0)\\b");
    auto start = std::sregex_iterator(this->program.begin() + this->index, this->program.end(), form);
    auto end = std::sregex_iterator();

    if (start != end){
        auto match = *start;
        std::string element = match[1].str();

        //Check if the current element has a prefix, or is part of an operation
        if ((element[0] == '+' || element[0] == '-') && this->pif.size() != 0 && (this->pif.back().first == Identifier || this->pif.back().first == Int))
            return false;

        this->index += element.size();
        std::pair<int, int> pos = this->st.addConstant(element);
        this->pif.push_back(std::make_pair(Int, pos));
        return true;
    }
    return false;
}

bool Scanner::treatBoolConstant(){
    //Checking with regex if at current index, program starts with true or false
    std::regex form("^(true|false)\\b");
    auto start = std::sregex_iterator(this->program.begin() + this->index, this->program.end(), form);
    auto end = std::sregex_iterator();

    if (start != end){
        auto match = *start;
        std::string element = match[1].str();

        this->index += element.size();
        std::pair<int, int> pos = this->st.addConstant(element);
        this->pif.push_back(std::make_pair(Bool, pos));
        return true;
    }
    return false;
}

bool Scanner::treatCharConstant(){
    //Checking with regex if at current index, program starts with char
    std::regex form("^'([a-zA-Z0-9])'\\B");
    auto start = std::sregex_iterator(this->program.begin() + this->index, this->program.end(), form);
    auto end = std::sregex_iterator();

    if (start != end){
        auto match = *start;
        std::string element = match[1].str();

        this->index += element.size();
        std::pair<int, int> pos = this->st.addCharConstant(element.substr(1, element.size()-2));
        this->pif.push_back(std::make_pair(Char, pos));
        return true;
    }
    return false;
}

bool Scanner::treatStringConstant(){
    //Checking with regex if at current index, program starts with string
    std::regex form("^\"([a-zA-Z0-9 ]*)\"\\B");
    auto start = std::sregex_iterator(this->program.begin() + this->index, this->program.end(), form);
    auto end = std::sregex_iterator();

    if (start != end){
        auto match = *start;
        std::string element = match[1].str();

        this->index += element.size();
        std::pair<int, int> pos = this->st.addStringConstant(element.substr(1, element.size()-2));
        this->pif.push_back(std::make_pair(String, pos));
        return true;
    }
    return false;
}

bool Scanner::treatIdentifier(){
    //Checking with regex if at current index, program starts with string
    std::regex form("^([a-zA-Z][a-zA-Z0-9]*)\\b");
    auto start = std::sregex_iterator(this->program.begin() + this->index, this->program.end(), form);
    auto end = std::sregex_iterator();

    if (start != end){
        auto match = *start;
        std::string element = match[1].str();

        this->index += element.size();
        std::pair<int, int> pos = this->st.addIdentifier(element);
        this->pif.push_back(std::make_pair(Identifier, pos));
        return true;
    }
    return false;
}