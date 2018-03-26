#pragma once


#include <iostream>
#include "Vecteur.h"

class Oscillateur{
	public:
	
	Vecteur fonction(double to);
	//Vecteur fonctiontest(double to); ////sert por le test
	void setP (Vecteur set);
	void setQ (Vecteur set);
	Vecteur getP() const;
	Vecteur getQ() const;
	//constructeur
	Oscillateur(Vecteur P, Vecteur Q);
	Oscillateur();
	
	protected:
	Vecteur G;//gravité initialisé dans le constructeur
	Vecteur P;// le degre de liberte est donne par la taille de ce vecteur, c'est le paramentre
	Vecteur Q;// represent la vitesse
};

//affichage (operateur externe)
std::ostream& operator<<(std::ostream& sortie, const Oscillateur &o);


//affichage du mauvaise dimension?
//test de testintegrateur?
