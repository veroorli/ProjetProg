
#pragma once
#include <iostream>
#include "supportdessin.h"
#include "Pendule.h"
#include "Ressort.h"
#include "oscillateur.h"
#include "textviewer.h"

void Textviewer::dessine(Pendule const& pendule){
	flot<<pendule;};
void Textviewer::dessine(Ressort const& ressort){
	flot<< ressort;};
