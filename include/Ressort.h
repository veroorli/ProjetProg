#pragma once


#include <iostream>

#include "integrateur.h"
#include "Vecteur.h"
#include "oscillateur.h"

class Ressort : public oscillateur  {
public: 
Ressort (Vecteur& P,Vecteur& Q,double k,double m,double lambda,Vecteur& A):
	Oscillateur(P, Q), k(k), m(m),lambda(lambda), A(A) 
	{if(m<=0){cout<<"error";
		throw int (-1);}}
	}

Vecteur fonction(double to);

private:
double k;//raideur
double m;//masse
double lambda;//coef frottement
Vecteur A;// doit on creer une methode pour verifier que a est vecteur unitaire 
          // pareil pour constructeur oscillateur 
       
      };

	Vecteur Ressort:: fonction(double to){
		return ((-k/m)*P[0]-(lambda/m)*Q[0]+G*A);
	}
  
