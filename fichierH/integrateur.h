#pragma once

#include <iostream>
#include "oscillateur.h"

class Integrateur {
	
	protected: 
	
	public: 
	 virtual void evolue (Oscillateur& oscillateur, double dt, double t0)=0 ;
	
	};
	//à voir avec le polymorphisme

