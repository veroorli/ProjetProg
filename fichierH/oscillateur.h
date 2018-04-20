#pragma once


#include <iostream>
#include "vecteur.h"
#include "supportdessin.h"
#include "dessinable.h"

class Oscillateur : public Dessinable{
	public:
	
	virtual Vecteur fonction(double to); //J'ai mis ca comme virtuelle comme ca l'integrateur peut etre associe a ressort et pendule 

	void setP (Vecteur set);
	void setQ (Vecteur set);
	Vecteur getP() const;
	Vecteur getQ() const;
	Vecteur getG() const;
	//constructeur avec support
	Oscillateur(Vecteur P, Vecteur Q, double masse, Supportdessin* support); //on part du principe que la masse est au denominateur dans toutes les eq diff ses sous classes
	//constructeur sans rien
	Oscillateur();
	//constructeur sans support
	Oscillateur(Vecteur P, Vecteur Q, double masse);
	
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
