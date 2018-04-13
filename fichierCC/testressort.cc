
*/#include <iostream>
#include <vector> 
#include "Vecteur.h"
#include <cmath> 
#include "oscillateur.h"
#include "ressort.h"
 

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
double longeur(0);
double lambda(0.15);



Ressort ress (P,Q,k, m,lambda, A);
Pendule pend(longueur,m,lambda,P,Q);

IntegrateurEC integr;
double dt(0.01);
double to(0);
cout<<evolue (&ress, dt,to)<<endl;
cout<< evolue(&pend,dt,to)<<endl;
}
*/
