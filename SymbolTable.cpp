#include "SymbolTable.h"

std::pair<int,int> SymbolTable::addIdentifier(std::string name){
    return this->hash.add(name);
}
std::pair<int,int> SymbolTable::addConstant(std::string value){
    return this->hash.add(value);
}
std::pair<int,int> SymbolTable::addStringConstant(std::string value){
    return this->hash.add("\"" + value +"\"");
}
std::pair<int,int> SymbolTable::addCharConstant(std::string value){
    return this->hash.add("\'" + value +"\'");
}

std::pair<int,int> SymbolTable::findIdentifier(std::string name){
    return this->hash.get(name);
}
std::pair<int,int> SymbolTable::findConstant(std::string value){
    return this->hash.get(value);
}
std::pair<int,int> SymbolTable::findStringConstant(std::string value){
    return this->hash.get("\"" + value +"\"");
}
std::pair<int,int> SymbolTable::findCharConstant(std::string value){
    return this->hash.get("\'" + value +"\'");
}

std::string SymbolTable::getIdentifier(int bucketIndex, int listIndex){
    return this->hash.getById(bucketIndex, listIndex);
}
std::string SymbolTable::getConstant(int bucketIndex, int listIndex){
    return this->hash.getById(bucketIndex, listIndex);
}
std::string SymbolTable::getStringConstant(int bucketIndex, int listIndex){
    std::string value = this->hash.getById(bucketIndex, listIndex);
    value.erase(0, 1);
    return value.substr(0, value.find("\""));
}
std::string SymbolTable::getCharConstant(int bucketIndex, int listIndex){
    std::string value = this->hash.getById(bucketIndex, listIndex);
    value.erase(0, 1);
    return value.substr(0, value.find("\'"));
}