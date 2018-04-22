
#pragma once

#include "supportdessin.h"
#include "Pendule.h"
#include "Ressort.h"
#include "oscillateur.h"

class Textviewer:public Supportdessin{
	public:
	Textviewer(std::ostream&);
	
	virtual void dessine(Pendule const& pendule)override;
	virtual void dessine(Ressort const& ressort)override;
	
	protected:
	std::ostream& flot;
};
