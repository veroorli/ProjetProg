
#include <iostream>
#include <vector> 
#include "Vecteur.h"
#include <cmath> 
#include "oscillateur.h"
#include "integrateur.h"


using namespace std;


int main() {
	
	Vecteur P(5);
	Vecteur Q1(6);
	Vecteur Q2(5); 
	double masse(3);
	
	Oscillateur o1 (P, Q1, masse);
	Oscillateur o2 (P, Q2, masse);
	cout << "on peut tester G" << endl; 
	cout <<o2.getG() << endl;
	cout <<o1.getG() << endl;
	
	
	double temps_i(0.0);
	
	Vecteur TEST(0.7, 0.8, 0.9);
	cout << TEST << endl;
	
	
	
	return 0;
	}

