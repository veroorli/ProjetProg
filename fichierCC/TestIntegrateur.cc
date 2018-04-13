
#include <iostream>
#include <vector> 
#include "Vecteur.h"
#include <cmath> 
#include "oscillateur.h"
#include "integrateur.h"
#include "integrateurEC.h"


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
	
	
cout << "deuxieme partie du test" << endl;

	Vecteur para(2);
	para.set_coord(2, 1);
	Vecteur vitesse(2);
	vitesse.set_coord(1, 1);
	vitesse.set_coord(2, 2);
	double masse2(0.127);
	
	cout << para << endl;
	cout << vitesse << endl;
	
	
	Oscillateur os(para, vitesse, masse);
	
	
	double to(1);
	
	cout << "In oscillateur: " << os << endl;
	cout << to *( os.getP() + os.getQ()) << endl;
	
	Vecteur v = os.fonction(to); 
	cout << v << endl;
	double dt(0.01);
	
	IntegrateurEC integrer;
	integrer.evolue(os, dt, to);
	cout << os << endl;
	
	
	return 0;
	}

