#include "Grammar.h"
#include <sstream>
#include <iostream>
#include <algorithm>

Grammar::Grammar(std::string fileName){
    //Read from file
    std::ifstream in(fileName);
    this->readFromFile(in);
    in.close();
}

void Grammar::readFromFile(std::ifstream& in){
    //Read every neccessary info from file
    this->readLine(in, this->nonTerminals);
    this->readLine(in, this->terminals);
    in >> this->startingSymbol;
    this->readProductions(in);
}

void Grammar::readLine(std::ifstream& in, std::vector<std::string>& vec){
    //Getting a line from the file, than reading the words from it
    std::string line;
    std::getline(in, line);
    std::stringstream buffer(line);
    std::string varString;
    while (buffer >> varString){ vec.push_back(varString); }
}

void Grammar::readProductions(std::ifstream& in){
    //Reading the elements line by line than building up the productions
    std::string line;
    while(std::getline(in, line)){
        //Handle empty line
        if (line.size() == 1) continue; 

        std::stringstream buffer(line);
        std::string varString;
        std::vector<std::string> leftHandSide;
        std::vector<std::string> rightHandSide;
        bool rightHand = false;
        
        //Reading the words in the list
        while (buffer >> varString){
            if (varString == "->"){
                rightHand = true;
                continue;
            }
            if (rightHand){
                rightHandSide.push_back(varString);
                continue;
            }
            leftHandSide.push_back(varString);
        }

        //Adding the production to the object
        if (this->productions.find(leftHandSide) == this->productions.end()){
            std::vector<std::vector<std::string>> mapRightHandSide;
            mapRightHandSide.push_back(rightHandSide);
            this->productions.insert({leftHandSide, mapRightHandSide});
        }else{
            this->productions.at(leftHandSide).push_back(rightHandSide);
        }
    }
}

void Grammar::printVector(std::vector<std::string> vec){
    std::cout << "{";
    for (auto i:vec){
        std::cout << i << ",";
    }
    std::cout << "}";
}

void Grammar::printNonTerminals(){ std::cout << std::endl; this->printVector(this->nonTerminals); std::cout << std::endl; }

void Grammar::printTerminals(){ std::cout << std::endl; this->printVector(this->terminals); std::cout << std::endl; }

void Grammar::printProductions(){
    std::cout << std::endl;
    for(const auto& elem : this->productions)
    {
        std::cout << std::endl;
        this->printVector(elem.first);
        std::cout << " -> ";
        for (auto i: elem.second){
            this->printVector(i);
            std::cout << ", ";
        }
    }
    std::cout << std::endl;
}

void Grammar::printProductions(std::string symbol){
    std::cout << std::endl;
    for(const auto& elem : this->productions)
    {
        if (std::find(elem.first.begin(), elem.first.end(), symbol) == elem.first.end()) continue;

        std::cout << std::endl;
        this->printVector(elem.first);
        std::cout << " -> ";
        for (auto i: elem.second){
            this->printVector(i);
            std::cout << ", ";
        }
    }
    std::cout << std::endl;
}

bool Grammar::checkCFG(){
    //Check if every left hand contains only one symbol
    for(const auto& elem : this->productions)
    {
        if (elem.first.size() != 1) return false;
    }
    return true;
}