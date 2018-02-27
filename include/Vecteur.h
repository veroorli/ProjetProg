#include <iostream>

#include <vector> 


class Vecteur {
	public:
	//rajoute une dimension au vecteur
	void augmente(double valeur) {vecteur.push_back(valeur);}
	//modifie la valeur d'une coordonnée 
	void set_coord(int position, double valeur) {
		vecteur[position-1] = valeur;
		}
	//affiche les valeurs 
	void affiche() const {
		for (size_t i=0; i<vecteur.size(); i++) {cout << vecteur[i] << " ";}
		cout << endl;
		}
	//compare des vectuers
	bool compare(Vecteur test) {
		if (test.getVecteur() == vecteur ) {return true;}
		else {return false;}
		;}
	
	private:
	vector<double> vecteur;
	vector<double> getVecteur() {return vecteur;}
	
	};
	
