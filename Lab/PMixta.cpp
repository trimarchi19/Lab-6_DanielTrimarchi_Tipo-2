#include "PMixta.h"
	PMixta::PMixta(){

	}
	PMixta::~PMixta(){

	}
	void PMixta::addCliente(Clientes pCliente){
		clientes.push_back(pCliente);
	}
	Clientes PMixta::getCliete(int i){
		return clientes[i];
	}