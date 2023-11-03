#include <iostream>
#include <fstream>
#include "./Scanner/Scanner.h"

std::string toString(tokenType type) {
  switch(type) {
    case Operator: return "Operator";
    case Separator: return "Separator"; break;
    case ReservedWord: return "ReservedWord"; break;
    case Identifier: return "Identifier"; break;
    case Int: return "Intb"; break;
    case Bool: return "Bool"; break;
    case Char: return "Char"; break;
    case String: return "String"; break;
  }
  return "None";
}

void printPIF(std::vector<std::pair<tokenType, std::pair<int,int>>>& pif, std::vector<std::string>& tokenVector, SymbolTable& st, std::ofstream& outPIF){
    for (int i=0; i<pif.size(); i++){
        std::string var;
        if (pif[i].first <= 2) var = tokenVector[pif[i].second.first];
        else if (pif[i].first == 3) var = st.getIdentifier(pif[i].second.first, pif[i].second.second);
        else if (pif[i].first <= 5) var = st.getConstant(pif[i].second.first, pif[i].second.second);
        else if (pif[i].first == 6) var = st.getCharConstant(pif[i].second.first, pif[i].second.second);
        else if (pif[i].first == 7) var = st.getStringConstant(pif[i].second.first, pif[i].second.second);

        outPIF << toString(pif[i].first) << " - " << pif[i].second.first << ", " << pif[i].second.second << " (" << var << ")" << std::endl;
    }
}

int main(int argc, char *argv[]){
    //Getting all the files as arguments
    std::ifstream p1(argv[1]);
    std::ifstream p2(argv[2]);
    std::ifstream p3(argv[3]);
    std::ifstream perr(argv[4]);
    std::vector<std::ifstream*> files{&p1,&p2,&p3,&perr};

    for (int j=0; j<files.size(); j++){
        //Creating the scanner and the file streams
        std::ifstream tokens(argv[5]);
        Scanner scanner(*files[j], tokens);
        std::ofstream out("p" + std::to_string(j+1) + "OUT.txt");
        std::ofstream outST("p" + std::to_string(j+1) + "ST.txt");
        std::ofstream outPIF("p" + std::to_string(j+1) + "PIF.txt");

        //Running the scanning
        try{
            scanner.scan();
        } catch (std::string message){
            out << message << std::endl;

            //Getting the tables from the scanner
            SymbolTable st = scanner.getST();
            std::vector<std::pair<tokenType, std::pair<int,int>>> pif = scanner.getPif();
            std::vector<std::string> tokenVector = scanner.getTokens();

            //Print out the pif
            printPIF(pif, tokenVector, st, outPIF);
            outPIF.close();

            //Print out the st
            st.printSymbolTable(outST);
            outST.close();
            out.close();
            
            return 0;
        }
        out << "Lexically correct!" << std::endl;
        out.close();

        //Getting the tables from the scanner
        SymbolTable st = scanner.getST();
        std::vector<std::pair<tokenType, std::pair<int,int>>> pif = scanner.getPif();
        std::vector<std::string> tokenVector = scanner.getTokens();

        //Print out the pif
        printPIF(pif, tokenVector, st, outPIF);
        outPIF.close();

        //Print out the st
        st.printSymbolTable(outST);
        outST.close();
    }

    return 0;
}