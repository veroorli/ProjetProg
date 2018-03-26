#include <iostream>
#include "oscillateur.h"

using namespace std;

Vecteur Oscillateur::fonction(double to){
	
	return to*(P+Q);
}

/*Vecteur Oscillateur::fonctiontest(){ ////sert pour le test
	Vecteur v(2);
	v.set_coord(2, -9.81);
	return v;
}*/


void Oscillateur::setP (Vecteur set) {
	P = set; 
	} ;
void Oscillateur::setQ (Vecteur set) {
	Q = set;
	};
Vecteur Oscillateur :: getP() const{
	return P;
	};
Vecteur Oscillateur :: getQ() const{
	return Q;
	};
	//constructeur
Oscillateur :: Oscillateur(Vecteur P, Vecteur Q) : P(P), Q(Q), G(0.0, 0.0, -9.81) {}
Oscillateur :: Oscillateur() : P(3), Q(3), G(0.0, 0.0, -9.81) {}

   //affichage (operateur externe)
ostream& operator<<(ostream& sortie, const Oscillateur &o) {
		sortie << o.getP() << " #position" << endl;
		sortie << o.getQ() << " #vitesse" << endl;
	return sortie;
}
