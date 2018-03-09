#pragma once


#include <iostream>
#include <vector> 
#include <cmath>

class Vecteur {
	
public:
	//rajoute une dimension au vecteur
	void augmente(double valeur) ;
	
	//modifie la valeur d'une coordonnée 
	void set_coord(int position, double valeur);
		
	//affiche les valeurs 
	void affiche() const ;
	
	//compare des vectuers
	bool compare(Vecteur test);
	
    
	
	  //creation de l'opposé d'un vecteur     
        Vecteur oppose() const ;
        
      //multiplication par un scalaire
        Vecteur mult(double x) const ;
        
        //multiplication des deux vecteurs (c'est le premier des deux opérandes qui fixe la dimension du résultat)
        double prod_scal(Vecteur autre) const ;
        
         //add vectors (choisir par convention que c'est la plus petite des deux dimensions qui détermine l'opération )
          
        Vecteur addition(Vecteur autre) const;
        //soustraction (voir add)
        Vecteur soustractio(Vecteur autre) const;
                

        //produit vectoriel de vecteurs de dim 3
        Vecteur prod_vect(Vecteur multiplier) const ;
        
        //calcul norme
        double norme() ;
        
        //calcul norme au carre
        double norme2() ;
        
        //sert a returner le vecteur qui est en private
        std::vector<double> getVecteur() ; 
        
	
	
	
private:
	std::vector<double> vecteur;
	
	
	};
	
