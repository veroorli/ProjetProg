
#include <iostream>
#include <vector> 
#include "vecteur.h"
#include <cmath> 
#include "oscillateur.h"
#include "ressort.h"
#include "pendule.h"
#include "integrateurEC.h"
 

using namespace std;

int main() {
Vecteur origine(3);
Vecteur A(0.8,0,0.6);
Vecteur P (1);
P.set_coord(1, 0.18);
Vecteur Q(1);
Q.set_coord(1,0);

double m(0.25);
double k (0.33);
double longueur(0); //NE MARCHE PAS POUR L=0 pour pendule
double lambda(0.15);



Ressort ress (P,Q,k, m,lambda, A);
//Pendule pend(longueur,m,lambda,P,Q);



IntegrateurEC integr;
double dt(0.01);
double to(5);
integr.evolue(ress, dt,to); //L'ERREUR EST ICI ET EST LIE AU POLYMORPHISME
//integr.evolue(pend,dt,to); //polimorphysme pour passer en paramete
cout << "ressort : " << ress << endl;
//cout << "pendule" << pend << endl;
cout << A << endl;
}
