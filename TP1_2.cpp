#include <iostream>
#include <string>
#include <list>

struct personne {

    std::string nom;
    std::string prenom;
    
    personne() 
        :nom("inconnu"),prenom("inconnu")
    {}

    personne(std::string n,std::string p) 
        :nom(n),prenom(p) 
    {}

    // void affiche() {
    //     std::cout<<"je contiens l'entier "<<nbre<<" et le mot "<<mot<<std::endl;
    // }
};

struct etudiant : public personne {

    int note;
    
    etudiant() 
            :personne(),note(0)
    {}

    etudiant(std::string n,std::string p,int pNote) 
        :personne(n,p),note(pNote)
    {}

};

void denomer(personne p)
{
    std::cout<<p.nom<<" "<<p.prenom<<std::endl;
}

int main()
{
    etudiant A("Franck","Ribery",2);
    etudiant B("Einstein","Albert",18);
    personne C("Huster","Francis");

    std::list<personne> L;
    L.push_back(A);
    L.push_front(B);
    L.push_front(C);

    for(personne p : L)
        denomer(p);

    return 0;
}

