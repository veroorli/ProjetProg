#include <vector>
#include "dessinable.h"
#include "supportdessin.h"


	//constructeur1
	Dessinable::Dessinable(Supportdessin* support) : support(support) 
	{}
	
	//constructeur2
	Dessinable::Dessinable()  {support = nullptr;}
	
	
	//fonction dessine
	void Dessinable::dessine() {};
	
	//destructeur
	Dessinable:: ~Dessinable(){
		delete support;
		};
