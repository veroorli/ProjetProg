#include <iostream>
#include "vecteur.h"
#include "supportdessin.h"
#include "dessinable.h"
#include "oscillateur.h"

using namespace std;

Vecteur Oscillateur::fonction(double to){
	
	return to*(P+Q);
}



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
Vecteur Oscillateur :: getG() const {
	return G;
	};
	//constructeur
Oscillateur :: Oscillateur(Vecteur P, Vecteur Q, double masse, Supportdessin* support) : Dessinable(support), P(P), Q(Q), masse(masse), G(0) {
	if (P.size() != Q.size()){
		cout << "erreur taille P differente de Q" << endl;
		}
		else {
			for (unsigned int i(0); i<(P.size()-1); ++i) {
				G.augmente(0.0); 
				}
			G.augmente(-9.81);// on place dans la derniere coordonne du vecteur la valeur de g
			}   //initialise vecteur gravite en fonction du nb n de coordonnes (mets sur n-1 coord la valeur 0.0 et sur la dereniere -9.81)
		
	if(masse<=0){cout<<"erreur masse <=0" << endl;}
	} 
Oscillateur :: Oscillateur() : P(3), Q(3), G(0.0, 0.0, -9.81) {}

Oscillateur :: Oscillateur(Vecteur P, Vecteur Q, double masse) : Dessinable(), P(P), Q(Q), masse(masse), G(0) {
	if (P.size() != Q.size()){
		cout << "erreur taille P differente de Q" << endl;
		}
		else {
			for (unsigned int i(0); i<(P.size()-1); ++i) {
				G.augmente(0.0); 
				}
			G.augmente(-9.81);
			} 
		}

   //affichage (operateur externe)
ostream& operator<<(ostream& sortie, const Oscillateur &o) {
		sortie << o.getP() << " #position" << endl;
		sortie << o.getQ() << " #vitesse" << endl;
	return sortie;
}
