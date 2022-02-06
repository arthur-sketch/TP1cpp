#include <iostream>
#include <string>
#include <vector>
#include <utility>
#include <algorithm>
#include <map>
#include <list>
#include <fstream>
#include <cmath>



struct color {

    //couleur r,g,b
    int r,g,b;

    //constructeurs
    color()
        :r(0),g(0),b(0)
        {}
    color(int r_arg,int g_arg,int b_arg)
        :r(r_arg),g(g_arg),b(b_arg)
        {}

};

struct image {

    //taille
    int Nx,Ny;
    //donnees
    std::vector<color> data;

    void assert_coord(int x,int y) const {

        if(x<0 || x>=Nx || y<0 || y>=Ny) {
        
            std::cerr<<"Index "<<x<<","<<y<<" hors bornes."<<std::endl;
            exit(1);

        }
    }

    color const& operator()(int x,int y) const {

        assert_coord(x,y);
        return data[y+Ny*x];
        
    }

    color& operator()(int x,int y) {
        assert_coord(x,y);
        return data[y+Ny*x];
    }

    void resize(int pNx, int pNy) {

        if (pNx>0 && pNy>0){
            Nx=pNx;
            Ny=pNy;

            data.resize(Nx*Ny);
        }

        else {
            std::cout<<"Erreurs de dimensions"<<std::endl;
        }

    }

};

std::ostream& operator<<(std::ostream& stream,const color& c) {  //affichage d'une couleur avec les 2 chevrons
        
    stream<<c.r<<" "<<c.g<<" "<<c.b;
    return stream;

};

void save_image(std::string nom, image pIm) {

    std::ofstream ofs;
    std::string nom_fichier=nom+".ppm";

    ofs.open(nom_fichier);


    ofs<<"P3\n";
    ofs<<pIm.Ny<<" "<<pIm.Nx<<std::endl;
    ofs<<255<<std::endl;
    
    for(int i=0;i<pIm.Nx;i++) {
        for(int j=0;j<pIm.Ny;j++) {
            ofs<<pIm(i,j)<<"\n";
        }
    }

    


};


int main() {
    

    color c(255,0,0);

    std::cout<<c<<std::endl;

    image im;

    im.resize(3,2);



    im(0,0)=color(255,0,0);
    im(1,0)=color(0,255,0);
    im(2,0)=color(0,0,255);
    im(0,1)=color(255,255,0);
    im(1,1)=color(0,255,255);
    im(2,1)=color(255,0,255);


    std::cout<<im(0,1)<<std::endl;

    //création d'une image de 30*30 avec un fond allant du rouge vers le bleu
    int taille_im=30;
    image im1;
    im1.resize(taille_im,taille_im);

    for(int i=0;i<taille_im;i++) {
        for(int j=0;j<taille_im;j++) {
            im1(i,j)=color(240-8*j,0,j*8);
            if (( (57 <= pow(i-15,2) + pow(j-15,2)) && (pow(i-15,2) + pow(j-15,2) <= 70) )) {
                im1(i,j)=color(0,255,0);
            }
        }
    }

    save_image("toutestko",im1);


    return 0;
}