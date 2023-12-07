#include <vector>
#include <queue>
#include <string>
#include "../Grammar/Grammar.h"

struct Config
{
    char state = 'q';
    int position = 0;
    std::vector<std::pair<std::string, int>> workingStack;
    std::queue<std::string> inputStack;
};

class Parser{
private:
    std::vector<std::string> input;
    Config currentConfig;
    Grammar grammar;
    bool assert(bool expression);

public:
    Parser(Grammar grammar, std::vector<std::string> input);
    bool expand();
    bool advance();
    bool mIn();
    bool back();
    bool anTry();
    bool success();
    void test();
};