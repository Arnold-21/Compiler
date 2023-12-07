#include <fstream>
#include <vector>
#include <string>
#include <map>

class Grammar{
private:
    void readFromFile(std::ifstream& in);
    void readLine(std::ifstream& in, std::vector<std::string>& vec);
    void readProductions(std::ifstream& in);

public:
    std::vector<std::string> nonTerminals;
    std::vector<std::string> terminals;
    std::map<std::vector<std::string>, std::vector<std::vector<std::string>> > productions;
    std::string startingSymbol;

    Grammar();
    Grammar(std::string fileName);
    void printNonTerminals();
    void printTerminals();
    void printProductions();
    void printProductions(std::string symbol);
    void printVector(std::vector<std::string> vec);
    bool checkCFG();

    std::vector<std::string> getProduction(std::string symbol, int index);
};