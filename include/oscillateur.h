#pragma once


#include <iostream>
#include "Vecteur.h"

class Oscillateur{
	public:
	Vecteur fonction(double to);
	void setP (Vecteur set);
	void setQ (Vecteur set);
	Vecteur getP();
	Vecteur getQ();
	//constructeur
	Oscillateur(Vecteur P, Vecteur Q);
	
	protected:
	Vecteur G;
	Vecteur P;// le degres de liberte est donne par la taille de ce vecteur 
	Vecteur Q;// 
};

