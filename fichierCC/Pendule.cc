
#include "Vecteur.h"
#include "oscillateur.h"
#include "Pendule.h"


Vecteur Pendule :: fonction(double to) {
	Vecteur resultat;
	resultat = 0-(G.norme()/longueur)*sin(P[0])-(frottement/(masse*longueur*longueur))*Q[0];
	return resultat;
	}

Pendule::Pendule(double longueur1, double masse1, double frottement1, Vecteur P, Vecteur Q) : Oscillateur(P, Q, masse1), longueur(longueur1), frottement(frottement1) {
	if (longueur1<=0) {
		throw int(-1); 
		}
	};
	
	
