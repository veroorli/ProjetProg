#include <iostream>
#include "oscillateur.h"
Vecteur Oscillateur::fonction(int t){
	
	return t*(P+Q);
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
	
