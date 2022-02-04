#include <iostream>
#include <string>
#include <vector>
#include <utility>
#include <algorithm>



int main()
{
    std::vector<std::string> mon_vecteur;


    mon_vecteur.push_back("Bonjour");
    mon_vecteur.push_back("comment");
    mon_vecteur.push_back("allez");
    mon_vecteur.push_back("vous");
    mon_vecteur.push_back("?");

    std::cout<<mon_vecteur.size()<<std::endl;
    std::cout<<mon_vecteur.capacity()<<std::endl;
  
    for (uint i=0;i<mon_vecteur.size();i++) {
        std::cout<<mon_vecteur[i]<<" ";
    }
    std::cout<<std::endl;

    for (auto it=mon_vecteur.begin(),it_end=mon_vecteur.end();it!=it_end;++it) {
        std::cout<<*it<<" ";
    }
    std::cout<<std::endl;

    for (auto variable : mon_vecteur) {
        std::cout<<variable<<" ";
    }
    std::cout<<std::endl;

    std::swap(mon_vecteur[1],mon_vecteur[3]);

    for (auto variable : mon_vecteur) {
        std::cout<<variable<<" ";
    }
    std::cout<<std::endl;

    mon_vecteur.insert(mon_vecteur.begin()+1,"à tous");

    *mon_vecteur.rbegin()="???";


    for (auto variable : mon_vecteur) {
        std::cout<<variable<<" ";
    }
    std::cout<<std::endl;

    std::sort (mon_vecteur.begin(),mon_vecteur.end());

    for (auto variable : mon_vecteur) {
        std::cout<<variable<<" ";
    }
    std::cout<<std::endl;
    
    // mon_vecteur.push_back("vous");
    // mon_vecteur.push_back("?"); 


    // std::cout<<mon_vecteur.size()<<std::endl;
    // std::cout<<mon_vecteur.capacity()<<std::endl;
    
    return 0;
}