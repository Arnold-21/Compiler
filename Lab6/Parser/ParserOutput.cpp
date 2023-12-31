#include "ParserOutput.h"
#include <stack>
#include <iostream>
#include <fstream>
#include <algorithm>

ParserOutput::ParserOutput(){}

ParserOutput::ParserOutput(std::vector<std::pair<std::string, int>>& prodString, Grammar grammar){
    //Going through production string in depth first search matter, building the table
    int prodIndex = -1;
    int tableIndex = 1;
    std::stack<std::pair<std::string, std::pair<int, std::pair<int, int>>>> currStack;
    currStack.push({prodString[0].first, {0, {-1, -1}}});

    //Until we dont get to the end of the production string we continue with the algorithm
    while (prodIndex != prodString.size() && !currStack.empty()){
        //Get the top element from the stack
        std::pair<std::string, std::pair<int, std::pair<int,int>>> symbol = currStack.top();
        currStack.pop();

        //Increment production index
        prodIndex++;

        //Put the element in the parsing table
        this->addElement(symbol.second.first, symbol.first, prodString[prodIndex].second, symbol.second.second.first, symbol.second.second.second);

        //Since the top of the stack is equal to the current element in the production string, if the parsing was succesfull, we don't have to check if they are equal
        //Check if the current element is a non terminal
        if (prodString[prodIndex].second != -1){
            //Get the production of the current symbol
            std::vector<std::string> symbolProduction = grammar.getProduction(symbol.first, prodString[prodIndex].second);

            //Put every production in the stack
            for (int i = symbolProduction.size() - 1; i>=0; i--){
                if (i == 0)
                    currStack.push({symbolProduction[i], {tableIndex + i, {symbol.second.first, -1}}});
                else
                    currStack.push({symbolProduction[i], {tableIndex + i, {symbol.second.first, tableIndex + i -1}}});
            }
            tableIndex += symbolProduction.size();
        }
    }

    //Sort the table by index
    std::sort(this->table.begin(), this->table.end(), [](const tableRow& row1, const tableRow& row2){ return row1.index < row2.index; });
}

std::vector<tableRow> ParserOutput::getTable(){
    return this->table;
}

void ParserOutput::printTable(){
    //Print every row in the table
    std::cout << std::endl;
    for (auto& i : this->table){
        std::cout << i.index << " - " << i.productionSymbol << "(" << i.productionIndex << ") - p: " << i.parentIndex << " - s: " << i.siblingIndex << std::endl;
    }
    std::cout << std::endl;
}

void ParserOutput::printToFile(std::string fileName){
    std::ofstream out(fileName);
    for (auto& i : this->table){
        out << i.index << " - " << i.productionSymbol << "(" << i.productionIndex << ") - p: " << i.parentIndex << " - s: " << i.siblingIndex << std::endl;
    }
    out.close();
}

void ParserOutput::addElement(int index, std::string pordSymbol, int prodIndex, int parentIndex, int siblingIndex){
    //If the index is just above the parentIndex, the current row doesn't have a sibling, otherwise, it's - 1
    this->table.push_back({index, pordSymbol, prodIndex, parentIndex, siblingIndex});
}