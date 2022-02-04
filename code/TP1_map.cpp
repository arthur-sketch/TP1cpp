#include <iostream>
#include <string>
#include <vector>
#include <utility>
#include <algorithm>
#include <map>
#include <list>



void ajoute_evenement(std::map<int,std::list<std::string>>& a,int date,std::string event) {
    if (a.find(date) == a.end()) {
        a[date]={""};
    }
    a[date].push_back(event);
}

void affiche(std::map<int,std::list<std::string>> const a) {
    for (auto it=a.begin(),it_end=a.end();it!=it_end;++it) {
        std::cout<<it->first<<" évènements : ";
        for (auto variable : it->second) {
            std::cout<<variable<<" ";
        }
        std::cout<<std::endl;
    }
}

int main() {
    


    // std::map<std::string,float> mappe;
    // mappe["jambon"]=10;
    // mappe["salade"]=8.5;
    // mappe["pâtes"]=11.20;
    // mappe["pizza"]=13;
    // mappe["tartare"]=19.99;


    std::map<int,std::list<std::string>> map_evenement;
    map_evenement[2000]={"Naissance Arthur"};

    ajoute_evenement(map_evenement,1994,"Creation de CPE Lyon");
    ajoute_evenement(map_evenement,1994,"Creation de CPE Lyon");
    ajoute_evenement(map_evenement,1994,"Creation de CPE Lyon");
    ajoute_evenement(map_evenement,1991,"Creation de CPE Lyon");

    affiche(map_evenement);







    return 0;
}