#pragma once
#include <iostream>
#include "dessinable.h"
#include <vector>
#include "integrateur"

class Systeme::public Dessinable{
	
	public:
	Systeme( vector<Oscillateur>liste_oscillateur,Integrateur* integrateur, Supportdessin* support);
	void evolue (double dt, double t0);
   private:
   vector<Oscillateur>liste_oscillateur;
   Integrateur* integrateur;
