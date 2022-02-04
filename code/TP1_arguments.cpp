#include <iostream>
#include <string>
#include <vector>
#include <utility>
#include <algorithm>


void affiche(std::vector<std::string> const& mon_vecteur) {

    for (auto it=mon_vecteur.begin(),it_end=mon_vecteur.end();it!=it_end;++it) {
        std::cout<<*it<<" ";
    }
    std::cout<<std::endl;

}


std::string concatene(std::vector<std::string> const& mon_vecteur) {

    std::string valRen="";

    for (auto it=mon_vecteur.begin(),it_end=mon_vecteur.end();it!=it_end;++it) {
        valRen+=*it;
        valRen+=' ';
    }

    return valRen;
}

void ajoute_virgule(std::vector<std::string>& mon_vecteur) {

    for (auto it=mon_vecteur.begin(),it_end=mon_vecteur.end();it!=it_end;++it) {
        *it+=',';
    }
}




int main() {


    std::vector<std::string> mon_vecteur;


    mon_vecteur.push_back("Bonjour");
    mon_vecteur.push_back("comment");
    mon_vecteur.push_back("allez");
    mon_vecteur.push_back("vous");
    mon_vecteur.push_back("?");
    
    affiche(mon_vecteur);
    ajoute_virgule(mon_vecteur);

    std::cout<<concatene(mon_vecteur)<<std::endl;
    
    
    
    
    
    
    
    
    
    
    return 0;
}