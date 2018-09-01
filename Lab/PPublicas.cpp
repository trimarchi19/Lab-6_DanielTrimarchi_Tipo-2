#include "PPublicas.h"

	PPublicas::PPublicas(){

	}
	void PPublicas::setNoombre(string pNom){
		nombre=pNom;
	}
	string PPublicas::getNoombre(){
		return nombre;
	}
	void PPublicas::setMaxc(int pMax){
		maxc=pMax;
	}
	int PPublicas::getMaxc(){
		return maxc;
	}