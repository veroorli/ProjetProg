
#pragma once



class Dessinable;//declaration prealable , il existe en memoire donc un classe pendule et ressort: les classes sont indefinies ici mais elles sont presentes on peut donc les utiliser dans la methode dessine 
class Pendule;
class Ressort;
class Oscillateur;
 
class Supportdessin {
	
	public:

	virtual void dessine(Pendule const& pendule)=0;
	virtual void dessine(Ressort const& ressort)=0;
	
	protected:

	
};
