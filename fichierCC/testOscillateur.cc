/*
#include <iostream>
#include <vector> 
#include "vecteur.h"
#include <cmath> 
#include "oscillateur.h"
 

using namespace std;


int main() { 
	Vecteur vect1(2);
	Vecteur vect2(2);
	double masse(8.0);
	Oscillateur o(vect1, vect2, masse);
	int temps(5);
	o.fonction(temps);
	cout << "#oscillateur" << endl;
	cout << o << endl;
	cout << vect1 << endl;
	cout << vect2 << endl;

	cout << "fin partie 1" << endl;
	
	vect1.set_coord(2, 3.5);
	vect2.set_coord(1, 7.98);
	cout << vect1 << endl;
	cout << vect2 << endl;
	cout << o << endl;
	
	cout << "fintest" << endl; //ce test sert pour montrer que un fois l'oscillateur o initialisé, P et Q ne changent pas au moins de l'appelle à la methode setP ou setQ
	
	o.setP(vect1);
	o.setQ(vect2);
	
	cout << o << endl;
	
	cout << "fin partie 2" << endl;
	
	}
*/
