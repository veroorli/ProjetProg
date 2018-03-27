#pragma once

#include "integrateur.h"
#include "Vecteur.h"
#include "oscillateur.h"

class IntegrateurEC : public Integrateur {
	
	public: 
	void evolue (Oscillateur& oscillateur, double dt, double t0) ;
	private:
	
	}; 

