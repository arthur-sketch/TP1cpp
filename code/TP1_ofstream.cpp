#include <iostream>
#include <string>
#include <vector>
#include <utility>
#include <algorithm>
#include <map>
#include <list>
#include <fstream>




int main() {

    std::ofstream ofs;

    ofs.open("text.txt");

    ofs<<"Bonjour \n";
    ofs<<25<<std::endl;

    ofs.close();

    std::ifstream ifs;

    std::string sortie;
    
    ifs.open("text.txt");


    char c;

    while(ifs.get(c)){
        std::cout<<c;
    }
    std::cout<<std::endl;

    ifs.close();

    return 0;
}