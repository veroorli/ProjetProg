#pragma once

#include <vector>
#include "supportdessin.h"


class Dessinable {
	
protected: 
	
    //fonction dessine
	virtual void dessine() = 0;
	
	//constructeur1
	Dessinable(Supportdessin* support);
	
	//constructeur2
	Dessinable();
	
	//destructeur
	~Dessinable();
	
private:
	
	Supportdessin* support;
	
	};
	
