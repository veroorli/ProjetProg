
#include <iostream>
#include <vector> 
#include "vecteur.h"
#include <cmath> 
#include "oscillateur.h"
#include <iostream> 
 

using namespace std;

int main() {
	
///////////////////
// un vecteur en 3D :
Vecteur vect1(1.0, 2.0, -0.1);

// un autre vecteur en 3D
Vecteur vect2(2.6, 3.5,  4.1);

Vecteur vect3(vect1);  // copie de V1
Vecteur vect4(4);      // le vecteur nul en 4D

cout << "Vecteur 1 : " << vect1 << endl;
cout << "Vecteur 2 : " << vect2 << endl;
cout << "Vecteur 4 : " << vect4 << endl;

cout << "Le vecteur 1 est ";
if (vect1 == vect2) {
    cout << "égal au";
} else {
    cout << "différent du";
}
cout << " vecteur 2," << endl << "et est ";
if (vect1 != vect3) {
    cout << "différent du";
} else {
    cout << "égal au";
}
cout << " vecteur 3." << endl;

cout << "***********nouveau test" << endl;

cout << vect1*vect2 << endl;
cout << vect2*vect1 << endl;
cout << 3*vect1 << endl;
Vecteur vect5;
cout << (vect1 ^ vect2) << endl;




	} 
