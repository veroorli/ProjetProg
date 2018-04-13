#pragma once


#include <iostream>
#include "Vecteur.h"

class Oscillateur{
	public:
	
	Vecteur fonction(double to);

	void setP (Vecteur set);
	void setQ (Vecteur set);
	Vecteur getP() const;
	Vecteur getQ() const;
	Vecteur getG() const;
	//constructeur
	Oscillateur(Vecteur P, Vecteur Q, double masse); //on part du principe que la masse est au denominateur dans toutes les eq diff ses sous classes
	Oscillateur();
	
	protected:
	Vecteur G;//gravité initialisé dans le constructeur
	Vecteur P;// le degre de liberte est donne par la taille de ce vecteur, c'est le paramentre
	Vecteur Q;// represent la vitesse
	double masse;
};

//affichage (operateur externe)
std::ostream& operator<<(std::ostream& sortie, const Oscillateur &o);


//affichage du mauvaise dimension?
//test de testintegrateur?
//affichage de vecteur car il fait un espace de trop