#include <iostream>
#include "dessinable.h"
#include "supportdessin.h"
#include "systeme.h"
#include <vector>
#include "oscillateur.h"

using namespace std;

Systeme::Systeme ( vector<Oscillateur> liste_oscillateur,Integrateur* integrateur = nullptr, Supportdessin* support = nullptr)://probeleme
 liste_oscillateur(liste_oscillateur), integrateur(integrateur), support(support) {}
 ;
 
 virtual void Systeme::dessine() override
  { support->dessine(*this); } 
 
	
