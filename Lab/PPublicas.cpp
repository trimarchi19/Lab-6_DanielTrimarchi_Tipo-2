#include "PPublicas.h"

	PPublicas::PPublicas(){

	}
	void PPublicas::setNombre(string pNom){
		nombre=pNom;
	}
	string PPublicas::getNombre(){
		return nombre;
	}
	void PPublicas::setMaxc(int pMax){
		maxc=pMax;
	}
	int PPublicas::getMaxc(){
		return pMax;
	}