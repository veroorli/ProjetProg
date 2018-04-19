#include <vector>
#include "supportdessin.h"

class Dessinable {
	protected: 
	//fonction dessine
	virtual void dessine() = 0;
	//constructeur 
	  Dessinable::Dessinable(Supportdessin* support = nullptr) 
	   {}
	//destructeur
	
	private:
	Supportdessin* support;
	
	};
	
	Dessinable::void dessine(Oscillateur const& oscillateur) {
		 support->dessine(*this); } 

	//le texte est affiche dans un methode de supportdessin

	Dessinable::Dessinable(SupportaDessin support = nullptr) 
	   {}
