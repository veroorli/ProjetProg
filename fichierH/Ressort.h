#pragma once


#include <iostream>

#include "integrateur.h"
#include "vecteur.h"
#include "oscillateur.h"
#include "supportdessin.h"

class Ressort : public Oscillateur  {
public: 
Ressort (Vecteur& P,Vecteur& Q,double k,double masse,double lambda,Vecteur& A, Supportdessin* support);
//pour A il faut : verifier que a a trois dimension,si pas le cas diminuer ou augmenter la dimension , normaliser a .

//constructeur sans support
Ressort (Vecteur& P,Vecteur& Q,double k,double masse,double lambda,Vecteur& A);
	
virtual Vecteur fonction(double to) override;
virtual void dessine() override;
	

double getk()const;
Vecteur getA()const;
double getlambda()const;

void setk(double set);
void setA(Vecteur set);
void setlambda(double set);

private:
double k;//raideur double lambda;//coef frottement
Vecteur A;// doit on creer une methode pour verifier que a est vecteur unitaire 
double lambda;         // pareil pour constructeur oscillateur 
};

