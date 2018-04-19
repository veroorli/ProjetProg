#pragma once
#include <iostream>
#include "dessinable.h"

class Systeme::public Dessinable{
	
	public:
	Dessinable ( Supportdessin* support=nullptr);
	virtual void dessine() =0;
	
	protected:
	Supportdessin* support;
};
