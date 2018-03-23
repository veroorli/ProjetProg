#pragma once


#include <iostream>
#include "Vecteur.h"

class Oscillateur{
	// contructeur ??
	
	public:
	Vecteur fonction(double to);
	Vecteur getposition const() ;
	Vecteur getvitesse const ();
	private:
	
	Vecteur P;// le degres de liberte est donne par la taille de ce vecteur 
	Vecteur Q;// tableau de la premiere derivee du vecteur P
};


