#include <iostream>
#include "integrateur.h"
#include "Vecteur.h"
#include "oscillateur.h"

using namespace std; 

 void IntegrateurEC::evolue(Oscillateur oscillateur&, double dt, double t0) {
		oscillateur.setQ() = oscillateur.getQ() + dt*oscillateur.fonction(t0);
		oscillateur.setP() = oscillateur.getP() + dt*oscillateur.getQ();
		}
	
	
