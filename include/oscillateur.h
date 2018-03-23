#pragma once


#include <iostream>
#include "Vecteur.h"

class Oscillateur{
	public:
	Vecteur fonction(double t);
	void setP (Vecteur set);
	void setP (Vecteur set);
	Vecteur getP();
	Vecteur getQ();
	private:
	
	Vecteur P;// le degres de liberte est donne par la taille de ce vecteur 
	Vecteur Q;// 
};

