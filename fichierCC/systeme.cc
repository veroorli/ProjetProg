#include <iostream>
#include "dessinable.h"
#include "supportdessin.h"
#include "systeme.h"
#include <vector>
#include "oscillateur.h"



//constructeur sans support
 Systeme::Systeme(std::vector<Oscillateur*> liste_oscillateur,Integrateur* integrateur) :
 Dessinable(), integrateur(integrateur), liste_oscillateur(liste_oscillateur) {
		
	 
	 }
 
 
//constructeur avec support
 Systeme::Systeme(std::vector<Oscillateur*> liste_oscillateur,Integrateur* integrateur, Supportdessin* support) : 
 Dessinable(support), integrateur(integrateur), liste_oscillateur(liste_oscillateur) {
	 
	 }
 
 
 void Systeme::dessine() 
  {std::cout << "eureka!" << std::endl;} //support->dessine(*this); } //il faut avoir fait support dessine 
 
 void Systeme::evolue (double dt, double t0) {
	 for (auto oscillateur : liste_oscillateur)
	 {
		 integrateur->evolue(*oscillateur, dt, t0);}
		  };
   
	
