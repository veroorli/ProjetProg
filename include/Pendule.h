#pragma once

#include "oscillateur.h"
#include <cmath>

class Pendule : public Oscillateur {
	//il faut faire un coinstructeur pour un vecteur a une dimension P et un vectuer de dim 1 Q(degree de liberte 1)
	public: 
	Vecteur fonction(double to);
	//constructeur du pendule
	Pendule(double longueur, double masse, double frottement, Vecteur P, Vecteur Q);
	
	private:
	double longueur; //longueur pendule
	double masse;
	double frottement; //frott de l'aire ou du fluide correspondant à lambda
	}; 

	
	//norme de g comment initialiser g 
	//masse et longueur differents de 0
