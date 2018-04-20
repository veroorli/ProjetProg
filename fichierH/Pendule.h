#pragma once


#include "vecteur.h"
#include "oscillateur.h"
#include "pendule.h"
#include "supportdessin.h"

class Pendule : public Oscillateur {
	//il faut faire un coinstructeur pour un vecteur a une dimension P et un vectuer de dim 1 Q(degree de liberte 1)
	public: 
	Vecteur fonction(double to);
	//constructeur sans support
	Pendule(double longueur1, double masse1, double frottement1, Vecteur P, Vecteur Q);
	//constructeur du pendule
	Pendule(double longueur, double masse, double frottement, Vecteur P, Vecteur Q, Supportdessin* support);
    //set
    void setlongueur(double set);
    void setfrottement(double set);
    //get
    double getlongueur()const;
    double getfrottement() const;
    
    
    
	private:
	double longueur; //longueur pendule
	double frottement; //frott de l'aire ou du fluide correspondant à lambda
	}; 

	
	//norme de g comment initialiser g 
	//masse et longueur differents de 0
