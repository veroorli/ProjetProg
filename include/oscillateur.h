#pragma once


#include <iostream>
#include "Vecteur.h"

class Oscillateur{
	public:
	Vecteur fonction(double t);
	private:
	
	Vecteur P;// le degres de liberte est donne par la taille de ce vecteur 
	Vecteur Q;// 
};

//il faut rajoter set et get pour P et Q
