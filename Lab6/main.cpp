#include "Parser/Parser.h"
#include <iostream>

void handleGrammarFileSwitch(Grammar& grammar){
    //Get the file name
    std::string fileName;
    std::cout << "Enter the file name: ";
    std::cin >> fileName;
    std::cout << std::endl;

    grammar = Grammar(fileName);
}

void handleCfgCheck(Grammar& grammar){
    //Check if grammar is cfg or not and print appropiate message
    if (grammar.checkCFG())
        std::cout << std::endl << "The given grammar is CFG!" << std::endl;
    else
        std::cout << std::endl << "The given grammar is not CFG!" << std::endl;
}

void handleSpecificProduction(Grammar& grammar){
    // Get the symbol and print it's productions
    std::string symbol;
    std::cout << "Enter the symbol you want to check: ";
    std::cin >> symbol;
    std::cout << std::endl;

    grammar.printProductions(symbol);
}

std::vector<std::string> readInputFromFile(std::string fileName){
    std::ifstream in(fileName);
    std::vector<std::string> returnString;
    std::string var;
    while (in >> var){
        returnString.push_back(var);
    }
    in.close();
    return returnString;
}

void handleParsing(){
    //Create and call the two parsings for the two inputs
    Grammar grammar1("Grammars/g1.txt");
    Grammar grammar2("Grammars/g2.txt");
    Parser parser1(grammar1, readInputFromFile("Grammars/g1Pif.txt"));
    Parser parser2(grammar2, readInputFromFile("Grammars/g2Pif.txt"));
    ParserOutput pout1 = parser1.parse();
    ParserOutput pout2 = parser2.parse();

    pout1.printTable();
    pout1.printToFile("pout1.txt");
    pout2.printTable();
    pout2.printToFile("pout2.txt");
}

void printMenu(){
    std::cout << std::endl;
    std::cout << "0. Exit" << std::endl;
    std::cout << "1. Display non terminals" << std::endl;
    std::cout << "2. Display terminals" << std::endl;
    std::cout << "3. Display productions" << std::endl;
    std::cout << "4. Display productions for a given symbl" << std::endl;
    std::cout << "5. Check if grammar is cfg" << std::endl;
    std::cout << "6. Input grammar file name" << std::endl;
    std::cout << "7. Test Parser" << std::endl;
    std::cout << "8. Parse current file" << std::endl;
}

int main(int argc, char *argv[]){
    int currentChoice;
    Grammar grammar("Grammars/g1.txt");
    Parser parser(grammar, std::vector<std::string>{"a", "b", "c"});

    //Menu
    while (true){
        //Print the menu and get the user input
        printMenu();
        std::cout << "> ";
        std::cin >> currentChoice;
        std::cout << std::endl;

        //Handle the different menu options
        switch (currentChoice)
        {
        case 0:
            return 0;
            break;

        case 1:
            grammar.printNonTerminals();
            break;
        case 2:
            grammar.printTerminals();
            break;
        case 3:
            grammar.printProductions();
            break;
        case 4:
            handleSpecificProduction(grammar);
            break;
        case 5:
            handleCfgCheck(grammar);
            break;
        case 6:
            handleGrammarFileSwitch(grammar);
            break;
        case 7:
            parser.test();
            break;
        case 8:
            handleParsing();
            break;

        default:
            std::cout << "Choice is not supported" << std::endl;
            break;
        }
    }
}