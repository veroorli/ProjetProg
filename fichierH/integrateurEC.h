#pragma once

#include <iostream>
#include "integrateur.h"
#include "vecteur.h"
#include "oscillateur.h"

class IntegrateurEC : public Integrateur {
	
	public: 
	virtual void evolue (Oscillateur& oscillateur, double dt, double t0)override ;
	private:
	
	}; 

