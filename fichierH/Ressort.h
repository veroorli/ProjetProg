#pragma once


#include <iostream>

#include "integrateur.h"
#include "Vecteur.h"
#include "oscillateur.h"

class Ressort : public oscillateur  {
public: 
Ressort (Vecteur& P,Vecteur& Q,double k,double masse,double lambda,Vecteur& A):
	Oscillateur(P, Q, masse), k(k),lambda(lambda), A(A) 
	{}
	}

Vecteur fonction(double to);

private:
double k;//raideur
double lambda;//coef frottement
Vecteur A;// doit on creer une methode pour verifier que a est vecteur unitaire 
          // pareil pour constructeur oscillateur 
       
      };

	Vecteur Ressort:: fonction(double to){
		return ((-k/m)*P[0]-(lambda/m)*Q[0]+G*A);
	}
  
