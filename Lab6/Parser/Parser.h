#include <vector>
#include <stack>
#include <string>
#include <fstream>
#include "ParserOutput.h"


struct Config
{
    char state = 'q';
    int position = 0;
    std::vector<std::pair<std::string, int>> workingStack;
    std::stack<std::string> inputStack;
};

class Parser{
private:
    std::vector<std::string> input;
    Config currentConfig;
    Grammar grammar;
    bool assert(bool expression);
    bool isNonterminal(std::string& symbol);
    bool isTerminal(std::string symbol);
    std::ofstream out;

public:
    Parser(Grammar grammar, std::vector<std::string> input);
    
    bool expand();
    bool advance();
    bool mIn();
    bool back();
    bool anTry();
    bool success();

    ParserOutput parse();
    void test();
};