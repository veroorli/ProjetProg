#include <iostream>
#include <vector>
#include "Vecteur.h"
 
using namespace std;



//rajoute une dimension au vecteur
	void Vecteur::augmente(double valeur) {vecteur.push_back(valeur);}
	
	//modifie la valeur d'une coordonnée 
	void Vecteur::set_coord(int position, double valeur) {
		vecteur[position-1] = valeur;}
	
	//affiche les valeurs 
	/*void Vecteur::affiche(ostream& sortie) const {
		for (size_t i=0; i<vecteur.size(); i++) {sortie << vecteur[i] << " ";}
		sortie << endl;}*/
	
	//compare des vecteurs
	bool Vecteur::operator==(const Vecteur &test) const {
		if (test.size() != this->size() ) 
			return false;
			
		for (size_t i(0); i<test.size(); ++i) {
				if (test[i]!= vecteur[i]) 
					return false;
				}
				return true;}
				
	bool Vecteur::operator!=(const Vecteur &test) const
	{
		return not(*this == test);
	}
		
	
	//creation de l'opposé d'un vecteur     
    Vecteur Vecteur::oppose() const {
                Vecteur op; 
                  for (size_t i=0; i<vecteur.size(); i++) {
                          op.augmente(0-vecteur[i]);}
                  return op;}
      

     //add vectors (choisir par convention que c'est la plus petite des deux dimensions qui détermine l'opération )
	 Vecteur& Vecteur::operator+=(const Vecteur &autre) {
				
				size_t n;
				if (this->size()<= autre.size()) //this est mon instance
				n = this->size();
				else 
				n = autre.size();
				
				for (size_t i=0; i<n; i++) 
					(*this)[i] += autre[i]; //this[] = this[]+autre[]
				
				return *this;
			}
			
        //soustraction (voir add)
      Vecteur& Vecteur::operator-=(const Vecteur &autre) {
                
               size_t n;
				if (this->size()<= autre.size()) //this est mon instance
				n = this->size();
				else 
				n = autre.size();
				
				for (size_t i=0; i<n; i++) 
					(*this)[i] -= autre[i];
				
				return *this;
             }

        
        //calcul norme
      double Vecteur::norme() {
                double x; 
                for (size_t i=0; i<vecteur.size(); i++) {
                x = x + (vecteur[i]*vecteur[i]); 
                        } 
                        return sqrt(x);
                }
        //calcul norme au carre
       double Vecteur::norme2() {
                double x; 
                for (size_t i=0; i<vecteur.size(); i++) {
                x = x + (vecteur[i]*vecteur[i]); 
                        } 
                        return x;
                }
                
        
        //vector<double> Vecteur::getVecteur() {return vecteur;} 
        //tous qui est ici est pour avoir accès à la taille et aux elements de mon vecteur sans créer des copies ou interferer avec le private
      size_t Vecteur::size() const
        {
			return vecteur.size();
		}
	
	  double& Vecteur::operator[](size_t i)
		{
			return vecteur[i];
		}
		
	  const double& Vecteur::operator[](size_t i) const
		{
			return vecteur[i];
		}
		
	   //constructeur qui crée un vecteur nul pour la dimension passée en argument
	   Vecteur::Vecteur(size_t dim) : vecteur(dim, 0.0) {}
	   
	   //Constructeur 3D (utile pour la géométrie)
	   Vecteur::Vecteur(double x, double y, double z) 
	   {
		   vecteur.reserve(3);
		   
		   vecteur.push_back(x);
		   vecteur.push_back(y);
		   vecteur.push_back(z);
		}
	
//addition (externe)	
Vecteur operator+(Vecteur v, const Vecteur &autre)
{
	return v += autre; //je peux faire ca car v est une copie donc il ne modifie pas directement v
}

//soustraction (externe)
Vecteur operator-(Vecteur v, const Vecteur &autre)
{
	return v -= autre;
	}

//produit scalaire (externe)
double operator*(const Vecteur &v1, const Vecteur &v2) {
     size_t n;
     if (v1.size()<=v2.size()) {
         n = v1.size();}
		else {
         n = v2.size();}
                        
     double resultat(0);
     for (size_t i=0; i<n; i++) {
         resultat += v1[i]*v2[i];}
     return resultat;
                }
	
 //multiplication par un scalaire
Vecteur operator*(const Vecteur &v, double scalaire) {
	Vecteur multiplie; 
       for (size_t i=0; i<v.size(); i++) {
            multiplie.augmente(v[i]*scalaire);
            }
    return multiplie;
	}
	
//produit vectoriel
Vecteur operator^(const Vecteur &v1, const Vecteur &v2){
     Vecteur resultat; 
                if ((v1.size() == 3) and (v2.size() == 3)) {
                                resultat.augmente(v1[1]*v2[2]-v1[2]*v2[1]);
                                resultat.augmente(v1[2]*v2[0]-v1[0]*v2[2]);
                                resultat.augmente(v1[0]*v2[1]-v1[1]*v2[0]);
        return resultat;
                   }
    else throw int(-1);
            } 


//operateur affichage 	
ostream& operator<<(ostream& sortie, const Vecteur &v) {
	for (size_t i=0; i<v.size(); i++) {sortie << v[i] << " ";}
		sortie << endl;
	return sortie;
	}
