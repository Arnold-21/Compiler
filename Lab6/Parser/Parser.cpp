#include "Parser.h"
#include <algorithm>
#include <iostream>

//Most of the checks are only present in this lab, most will be moved next time

Parser::Parser(Grammar grammar, std::vector<std::string> input){
    this->grammar = grammar;
    this->input = input;
    this->currentConfig.inputStack.push(grammar.startingSymbol);
}

bool Parser::isNonterminal(std::string& symbol){
    //Search given symbol in the grammar nonterminals
    if (std::count(this->grammar.nonTerminals.begin(), this->grammar.nonTerminals.end(), symbol) != 0) return true;
    return false;
}

bool Parser::isTerminal(std::string symbol){
    //Check for space special case in my grammar
    if (symbol == " ") symbol = "space";

    //Search given symbol in the grammar terminals
    if (std::count(this->grammar.terminals.begin(), this->grammar.terminals.end(), symbol) != 0) return true;
    return false;
}

bool Parser::expand(){
    std::string first = this->currentConfig.inputStack.top();
    this->currentConfig.inputStack.pop();

    //Get the elements first productions
    std::vector<std::string> productions = this->grammar.getProduction(first, 0);

    //Check special case epsilon, so it doesn't put that in the input stack
    if (productions.size() != 1 || productions[0] != "epsilon"){
        for (int i = productions.size() - 1; i >= 0; i--){
            this->currentConfig.inputStack.push(productions[i]);
        }
    }

    //Put the nonterminal to the working stack
    this->currentConfig.workingStack.push_back({first, 0});

    return true;
}

bool Parser::advance(){
    std::string first = this->currentConfig.inputStack.top();
    this->currentConfig.inputStack.pop();

    //Add symbol to working stack and increment position
    this->currentConfig.workingStack.push_back({first, -1});
    this->currentConfig.position++;

    return true;
}

bool Parser::mIn(){
    //Change config status
    this->currentConfig.state = 'b';

    return true;
}

bool Parser::back(){
    std::pair<std::string,int> first = this->currentConfig.workingStack.back();
    this->currentConfig.workingStack.pop_back();

    //Put the terminal back to the input stack and decrement position
    this->currentConfig.inputStack.push(first.first);
    this->currentConfig.position--;

    return true;
}

bool Parser::anTry(){
    //Check if first element in the working stack is a nonterminal
    std::pair<std::string,int> first = this->currentConfig.workingStack.back();
    this->currentConfig.workingStack.pop_back();

    //Handle the different cases
    //Check if there is more production for the current nonterminal, if so change the last working elements, and change the elements in the input stack to the next production 
    std::vector<std::string> nextProduction = this->grammar.getProduction(first.first, first.second + 1);
    if (nextProduction.size() > 0){
        std::vector<std::string> currentProduction = this->grammar.getProduction(first.first, first.second);

        //Add to the working stack
        this->currentConfig.workingStack.push_back({first.first, first.second + 1});
        
        //Remove current productions
        for (int i=0; i < currentProduction.size(); i++){
            this->currentConfig.inputStack.pop();
        }

        //Checking if the productions is epsilon, in which case the addition should be skipped
        //Add new production
        if (nextProduction.size() != 1 || nextProduction[0] != "epsilon"){
            for (int i=nextProduction.size() - 1; i >= 0; i--){
                this->currentConfig.inputStack.push(nextProduction[i]);
            }
        }

        //Change config state
        this->currentConfig.state = 'q';

        return true;
    }

    //Check fail state
    if (this->currentConfig.position == 0 && first.first == this->grammar.startingSymbol){
        //Change the current state to error state
        this->currentConfig.state = 'e';

        return true;
    }

    //Otherwise put the current nonterminal to the input stack with the state remaining b
    this->currentConfig.inputStack.push(first.first);

    return true;
}

bool Parser::success(){
    //Change the state to f (finished)
    this->currentConfig.state = 'f';

    return true;
}

bool Parser::assert(bool expression){
    if (!expression) throw "Assert failed!";
    return true;
}

void Parser::test(){
    Config copyConfig = this->currentConfig;
    std::vector<std::string> copyInput = this->input;

    //Checking expand function
    {
        std::string first = this->currentConfig.inputStack.top();
        this->currentConfig.inputStack.pop();
        this->currentConfig.state = 'b';

        this->assert(this->expand() == false);
        this->currentConfig.inputStack.push(first);
        this->assert(this->expand() == false);
        this->currentConfig.state = 'q';
        this->assert(this->expand() == true);
        this->assert(this->currentConfig.workingStack[0].first == first);
        this->assert(this->currentConfig.inputStack.size() != 0);
    }

    //Checking advance function
    {
        this->currentConfig = copyConfig;
        std::string first = this->currentConfig.inputStack.top();
        this->currentConfig.inputStack.pop();
        this->currentConfig.state = 'b';

        this->assert(this->advance() == false);
        this->currentConfig.inputStack.push(first);
        this->assert(this->advance() == false);
        this->currentConfig.state = 'q';
        this->assert(this->advance() == false);
        this->input = std::vector<std::string>{"b", "b"};
        this->currentConfig.inputStack.pop();
        this->currentConfig.inputStack.push("a");
        this->assert(this->advance() == false);
        this->input = std::vector<std::string>{"a", "a"};
        this->assert(this->advance() == true);
        this->assert(this->currentConfig.position == 1);
        this->assert(this->currentConfig.inputStack.size() == 0);
        this->assert(this->currentConfig.workingStack[0].first == "a");
    }
    
    //Check momentary insucces
    {
        this->currentConfig = copyConfig;
        this->input = copyInput;
        std::string first = this->currentConfig.inputStack.top();
        this->currentConfig.inputStack.pop();
        this->currentConfig.state = 'b';

        this->assert(this->mIn() == false);
        this->currentConfig.inputStack.push(first);
        this->assert(this->mIn() == false);
        this->currentConfig.state = 'q';
        this->assert(this->mIn() == false);
        this->currentConfig.inputStack.pop();
        this->currentConfig.inputStack.push("a");
        this->input = std::vector<std::string>{"a", "a"};
        this->assert(this->mIn() == false);
        this->input = std::vector<std::string>{"b", "b"};
        this->assert(this->mIn() == true);
        this->assert(this->currentConfig.inputStack.top() == "a");
        this->assert(this->currentConfig.state == 'b');
    }

    //Check back
    {
        this->currentConfig = copyConfig;
        this->input = copyInput;

        this->assert(this->back() == false);
        this->currentConfig.workingStack.push_back({"a", -1});
        this->assert(this->back() == false);
        this->currentConfig.state = 'b';
        this->assert(this->back() == true);
        this->assert(this->currentConfig.workingStack.size() == 0);
        this->assert(this->currentConfig.inputStack.top() == "a");
        this->assert(this->currentConfig.position == -1);
    }

    //Check another try
    {
        this->currentConfig = copyConfig;
        this->input = copyInput;

        this->assert(this->anTry() == false);
        this->currentConfig.workingStack.push_back({"S", 0});
        this->assert(this->anTry() == false);
        this->currentConfig.state = 'b';
        this->assert(this->anTry() == true);
        this->assert(this->currentConfig.state == 'e');
        this->assert(this->currentConfig.workingStack.size() == 0);

        this->currentConfig = copyConfig;
        this->input = copyInput;
        this->currentConfig.state = 'b';
        this->currentConfig.workingStack.push_back({"S", 0});
        this->currentConfig.position++;
        this->assert(this->anTry() == true);
        this->assert(this->currentConfig.inputStack.top() == "S");
        this->assert(this->currentConfig.workingStack.size() == 0);

        this->currentConfig = copyConfig;
        this->input = copyInput;
        this->currentConfig.state = 'b';
        this->currentConfig.workingStack.push_back({"A", 0});
        this->currentConfig.inputStack.pop();
        this->currentConfig.inputStack.push("A");
        this->currentConfig.inputStack.push("b");
        this->currentConfig.position++;
        this->assert(this->anTry() == true);
        this->assert(this->currentConfig.inputStack.top() == "c");
        this->assert(this->currentConfig.workingStack.back().first == "A");
        this->assert(this->currentConfig.workingStack.back().second == 1);
        this->assert(this->currentConfig.state == 'q');
    }

    //Check succesfull
    {
        this->currentConfig = copyConfig;
        this->input = copyInput;

        this->assert(this->success() == false);
        this->currentConfig.inputStack.pop();
        this->input = std::vector<std::string>{"a", "b"};
        this->assert(this->success() == false);
        this->input = std::vector<std::string>{"a"};
        this->assert(this->success() == true);
        this->assert(this->currentConfig.state == 'f');
    }

    //Redo everything
    this->currentConfig = copyConfig;
    this->input = copyInput;

    std::cout << "Parser testing was succesfull!" << std::endl;
}

ParserOutput Parser::parse(){
    //Implementing the recursive parsing strategy, not recursively
    //Going until we finish or we get an erro
    while (this->currentConfig.state != 'f' && this->currentConfig.state != 'e'){
        //Checking the two possible states, q and b
        if (this->currentConfig.state == 'q'){
            //Checking for success
            if (this->currentConfig.position == this->input.size() && this->currentConfig.inputStack.empty()){
                this->success();
            } else {
                //Checking the head of the input stack, to decide between expand, advance and momentary insuccess
                std::string first = this->currentConfig.inputStack.top();
                if (first == "space") first = " ";

                if (isNonterminal(first)){
                    this->expand();
                } else if (first == this->input[this->currentConfig.position]){
                    //Checking if the first element, which is a terminal is equal to the current element from the input
                    this->advance();
                } else {
                    this->mIn();
                }
            }
        } else {
            //Checking if the head of the working stack is a terminal or not
            std::string first = this->currentConfig.workingStack.back().first;
            if (first == "space") first = " ";
            
            if (isTerminal(first)){
                this->back();
            } else {
                this->anTry();
            }
        }
    }

    ParserOutput returnValue;

    //Checking if we got an error
    if (this->currentConfig.state == 'e'){
        std::cout << "Parsing was not succesfull!" << std::endl;
    } else {
        returnValue = ParserOutput(this->currentConfig.workingStack, grammar);        
    }

    return returnValue;
}
