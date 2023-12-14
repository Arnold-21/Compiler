#include <string>
#include <vector>
#include "../Grammar/Grammar.h"

struct tableRow
{
    int index;
    std::string productionSymbol;
    int productionIndex;
    int parentIndex;
    int siblingIndex;
};

class ParserOutput{
private:
    std::vector<tableRow> table;

public:
    ParserOutput();
    ParserOutput(std::vector<std::pair<std::string, int>>& prodString, Grammar grammar);

    std::vector<tableRow> getTable();
    void addElement(int index, std::string pordSymbol, int prodIndex, int parentIndex);
    void printTable();
    void printToFile(std::string fileName);
};