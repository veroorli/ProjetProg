#include <iostream>
#include "oscillateur.h"
Vecteur Oscillateur::fonction(double to){
	
	return to*(P+Q);
}

void Oscillateur::setP (Vecteur set) {
	P = set; 
	} ;
void Oscillateur::setQ (Vecteur set) {
	Q = set;
	};
Vecteur Oscillateur :: getP() {
	return P;
	};
Vecteur Oscillateur :: getQ() {
	return Q;
	};
	//constructeur
Oscillateur :: Oscillateur(Vecteur P, Vecteur Q) : P(P), Q(Q), G(0.0, 0.0, 9.81) {}
