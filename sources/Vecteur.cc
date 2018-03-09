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
	void Vecteur::affiche() const {
		for (size_t i=0; i<vecteur.size(); i++) {cout << vecteur[i] << " ";}
		cout << endl;}
	
	//compare des vecteurs
	bool Vecteur::compare(Vecteur test) {
		
		if (test.getVecteur() == vecteur ) {return true;}
		else {return false;}
	}
	
	//creation de l'opposé d'un vecteur     
        Vecteur Vecteur::oppose() const {
                Vecteur op; 
                  for (size_t i=0; i<vecteur.size(); i++) {
                          op.augmente(0-vecteur[i]);}
                  return op;}
      
     //multiplication par un scalaire
        Vecteur Vecteur:: mult(double x) const {
                Vecteur multiplie; 
                  for (size_t i=0; i<vecteur.size(); i++) {
                          multiplie.augmente(vecteur[i]*x);
                          }
                return multiplie;
                }
                
     //multiplication des deux vecteurs (c'est le premier des deux opérandes qui fixe la dimension du résultat)
       double Vecteur::prod_scal(Vecteur autre) const {
                        size_t n;
                        if (vecteur.size()<=autre.getVecteur().size()) 
                                n = vecteur.size();
                        else 
                                n = autre.getVecteur().size();
                        
                double resultat(0);
                for (size_t i=0; i<n; i++) {
                        resultat += autre.getVecteur()[i]*vecteur[i];
                        }
                return resultat;
                }
        
        
         //add vectors (choisir par convention que c'est la plus petite des deux dimensions qui détermine l'opération )
			Vecteur Vecteur::addition(Vecteur autre) const{
				Vecteur a;
				size_t n;
				if (vecteur.size()<=autre.getVecteur().size()) 
				n = vecteur.size();
				else 
				n = autre.getVecteur().size();
				for (size_t i=0; i<n; i++) {
				a.augmente(autre.getVecteur()[i]+vecteur[i]);
				}
				return a;}
        //soustraction (voir add)
        Vecteur Vecteur::soustractio(Vecteur autre) const{
                Vecteur a;
                        size_t n;
                        if (vecteur.size()<=autre.getVecteur().size()) 
                                n = vecteur.size();
                        else 
                                n = autre.getVecteur().size();
                        for (size_t i=0; i<n; i++) {
                        a.augmente(autre.getVecteur()[i]-vecteur[i]);
                        }
                return a;
                }

        //produit vectoriel de vecteurs de dim 3
        Vecteur Vecteur:: prod_vect(Vecteur multiplier) const {
                Vecteur resultat; 
                if ((multiplier.getVecteur().size() == 3) and (vecteur.size() == 3)) {
                                resultat.getVecteur()[0] = (vecteur[1]*multiplier.getVecteur()[2]-vecteur[2]*multiplier.getVecteur()[1]);
                                resultat.getVecteur()[1] = (vecteur[2]*multiplier.getVecteur()[0]-vecteur[0]*multiplier.getVecteur()[2]);
                                resultat.getVecteur()[2] = (vecteur[0]*multiplier.getVecteur()[1]-vecteur[1]*multiplier.getVecteur()[0]);
                        return resultat;
                        }
                else throw int(-1);
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
                
        //sert a returner le vecteur qui est en private
        vector<double> Vecteur::getVecteur() {return vecteur;} 
        
