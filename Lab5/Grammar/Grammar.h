#include <fstream>
#include <vector>
#include <string>
#include <map>

class Grammar{
private:
    void readFromFile(std::ifstream& in);
    void readLine(std::ifstream& in, std::vector<std::string>& vec);
    void readProductions(std::ifstream& in);

    std::vector<std::string> nonTerminals;
    std::vector<std::string> terminals;
    std::map<std::vector<std::string>, std::vector<std::vector<std::string>> > productions;
    std::string startingSymbol;

public:
    Grammar(std::string fileName);
    void printNonTerminals();
    void printTerminals();
    void printProductions();
    void printProductions(std::string symbol);
    void printVector(std::vector<std::string> vec);
    bool checkCFG();
    
};