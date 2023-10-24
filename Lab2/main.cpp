#include <iostream>
#include "SymbolTable.h"

int main(){
    SymbolTable symbol = SymbolTable();
    symbol.addIdentifier("var");
    symbol.addConstant("true");
    symbol.addConstant("15");
    symbol.addCharConstant("15");
    symbol.addStringConstant("15");

    std::pair<int,int> pos = symbol.findIdentifier("var");
    std::cout << pos.first << " " << pos.second << ": " << symbol.getConstant(pos.first, pos.second) << std::endl;
    pos = symbol.findConstant("true");
    std::cout << pos.first << " " << pos.second << ": " << symbol.getConstant(pos.first, pos.second) << std::endl;
    pos = symbol.findConstant("15");
    std::cout << pos.first << " " << pos.second << ": " << symbol.getConstant(pos.first, pos.second) << std::endl;
    pos = symbol.findCharConstant("15");
    std::cout << pos.first << " " << pos.second << ": " << symbol.getCharConstant(pos.first, pos.second) << std::endl;
    pos = symbol.findStringConstant("15");
    std::cout << pos.first << " " << pos.second << ": " << symbol.getStringConstant(pos.first, pos.second) << std::endl;

    return 0;
}