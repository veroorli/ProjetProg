#pragma once
#include <iostream>
#include "dessinable.h"
#include <vector>
#include "integrateur.h"
#include "supportdessin.h"

class Systeme : public Dessinable{ 
        
        public:
        
        //constructeur sans support
        Systeme(std::vector<Oscillateur*> liste_oscillateur,Integrateur* integrateur);
        //constructeur avec support
        Systeme(std::vector<Oscillateur*> liste_oscillateur,Integrateur* integrateur, Supportdessin* support);

        void evolue (double dt, double t0);
        virtual void dessine() override;
   
        private:
    std::vector<Oscillateur*> liste_oscillateur;
    Integrateur* integrateur;
};


