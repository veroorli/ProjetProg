#include <iostream>
#include "ressort.h"
#include "supportdessin.h"


using namespace std;

//constructeur
Ressort::Ressort (Vecteur& P,Vecteur& Q,double k,double masse,double lambda,Vecteur& A, Supportdessin* support):
	Oscillateur(P, Q,masse, support), k(k),lambda(lambda), A(A) 
	{}
// fonction diff	
Vecteur Ressort:: fonction(double to){
	Vecteur resultat(3); //returne un resultat en 3D comme pendule
	double res_fonction = ((-k/masse)*P[0]-(lambda/masse)*Q[0]+G*A);
	resultat.set_coord(1, res_fonction); 
		return resultat; //il faut que la fonction returne un vecteur 
	}
 // set
void Ressort::setk (double set) {
 k = set; 
	} ;
void Ressort::setA (Vecteur set) {
	A = set;
	};
void Ressort:: setlambda(double set){
	lambda=set;
    };

//get
double Ressort :: getk() const{
	return k;
	};
Vecteur Ressort :: getA() const{
	return A;
	};
double Ressort :: getlambda() const {
	return lambda;
	};


