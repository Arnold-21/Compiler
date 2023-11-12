#include "HashTable.h"

class SymbolTable{
    private:
        HashTable hash;

    public:
        // The char and string constants, and identifiers are handled separatly for possible easier use later on 
        std::pair<int,int> addIdentifier(std::string name);
        std::pair<int,int> addConstant(std::string value);
        std::pair<int,int> addStringConstant(std::string value);
        std::pair<int,int> addCharConstant(std::string value);

        std::pair<int,int> findIdentifier(std::string name);
        std::pair<int,int> findConstant(std::string value);
        std::pair<int,int> findStringConstant(std::string value);
        std::pair<int,int> findCharConstant(std::string value);

        std::string getIdentifier(int bucketIndex, int listIndex);
        std::string getConstant(int bucketIndex, int listIndex);
        std::string getStringConstant(int bucketIndex, int listIndex);
        std::string getCharConstant(int bucketIndex, int listIndex);

        void printSymbolTable(std::ofstream& out);
};