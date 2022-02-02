#include <iostream>
#include <string>

struct Conteneur {

    int nbre;
    std::string mot;

    void affiche() {
        std::cout<<"je contiens l'entier "<<nbre<<" et le mot "<<mot<<std::endl;
    }
};

int main()
{
    Conteneur conteneur_1;
    conteneur_1.nbre=6;
    conteneur_1.mot="coucou";

    conteneur_1.affiche();
    Conteneur conteneur_2 = {4,"bonjour"};
    conteneur_2.affiche();

    Conteneur tableau[]={ {18,"poisson"}, //crée un tableau de conteneur
                        {12,"charcuterie"},
                        {2,"soda"},
                        {0,"eau"} };
    for(auto valeur : tableau) //on utilise la méthode affiche de chacun des conteneurs
        valeur.affiche();



    // std::string variable="Ma variable";
    // variable += " a moi.";
    // std::cout<<variable<<std::endl;
    return 0;
}