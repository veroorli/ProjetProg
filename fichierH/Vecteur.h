#pragma once


#include <iostream>
#include <vector> 
#include <cmath>

class Vecteur {
	
public:

	//constructeur qui crée un vecteur nul pour la dimension passée en argument
	Vecteur(size_t dim = 0);

	Vecteur(double x, double y, double z);
	
	//rajoute une dimension au vecteur
	void augmente(double valeur) ;
	
	//modifie la valeur d'une coordonnée 
	void set_coord(int position, double valeur);
		
	//affiche les valeurs 
	//void affiche(std::ostream& sortie) const  ;
	
	//compare des vectuers
	bool operator==(const Vecteur &test) const;
	
	bool operator!=(const Vecteur &test) const;
	
	//creation de l'opposé d'un vecteur     
    Vecteur oppose() const ;
        
    //add vectors (choisir par convention que c'est la plus petite des deux dimensions qui détermine l'opération ) 
    Vecteur& operator+=(const Vecteur &autre);
       
    //soustraction (voir add)
    Vecteur& operator-=(const Vecteur &autre);
                
        
    //calcul norme
    double norme() ;
        
    //calcul norme au carre
    double norme2() ;
        
        
    //sert a returner le vecteur qui est en private
    //std::vector<double> getVecteur() ; 
        
	size_t size() const;
	
	double& operator[](size_t i);
	const double& operator[](size_t i) const;

	
private:
	
	std::vector<double> vecteur;
	
	};

//addition (externe)
Vecteur operator+(Vecteur v, const Vecteur &autre);
//soustraction (externe)
Vecteur operator+(Vecteur v, const Vecteur &autre);
//affichage 
std::ostream& operator<<(std::ostream& sortie, const Vecteur &v);
//produit scalaire (externe) c'est le plus grand des deux vecteurs qui fixe la multiplication
double operator*(const Vecteur &v1, const Vecteur &v2);
//multiplication par un scalaire (externe)
Vecteur operator*(const Vecteur &v, double scalaire);
//produit vectoriel (externe) entre vecteurs de dimension 3 : il lance un erreur si les deux vecteurs ne sont pas de dim 3
Vecteur operator^(const Vecteur &v1, const Vecteur &v2);

	
