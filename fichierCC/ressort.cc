#include <iostream>
#include "ressort.h"


using namespace std;

//constructeur
Ressort::Ressort (Vecteur& P,Vecteur& Q,double k,double masse,double lambda,Vecteur& A):
	Oscillateur(P, Q,masse), k(k),lambda(lambda), A(A) 
	{}
// fonction diff	
Vecteur Ressort:: fonction(double to){
		return ((-k/masse)*P[0]-(lambda/masse)*Q[0]+G*A);
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

