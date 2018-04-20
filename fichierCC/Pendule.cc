
#include "vecteur.h"
#include "oscillateur.h"
#include "pendule.h"
#include "supportdessin.h"


Vecteur Pendule :: fonction(double to) {
	Vecteur resultat(3); //vectuer en 3D
	double res_fonction;
	res_fonction = 0-(G.norme()/longueur)*sin(P[0])-(frottement/(masse*longueur*longueur))*Q[0];
	resultat.set_coord(1, res_fonction);
	return resultat;
	} //il faut que la fonction returne un vecteur!!!

Pendule::Pendule(double longueur1, double masse1, double frottement1, Vecteur P, Vecteur Q, Supportdessin* support) : Oscillateur(P, Q, masse1, support), longueur(longueur1), frottement(frottement1) {
	if (longueur1<=0) {
		std::cout<<"erreur longueur trop petite ou nulle pendule"<< std::endl; 
		}
	};

//constructeur sans support	
Pendule::Pendule(double longueur1, double masse1, double frottement1, Vecteur P, Vecteur Q) : Oscillateur(P, Q, masse1), longueur(longueur1), frottement(frottement1) {
	if (longueur1<=0) {
		std::cout<<"erreur longueur trop petite ou nulle pendule"<< std::endl; 
		}
	};
//get

void Pendule::setlongueur(double set){longueur=set;}
void Pendule::setfrottement(double set){frottement=set;}

//set

double Pendule::getlongueur()const{return longueur;}
double Pendule::getfrottement()const{return frottement;}

	
