#include "PSencilla.h"


	PSencilla::PSencilla(){

	}
	PSencilla::~PSencilla(){

	}
	void PSencilla::addCliente(Clientes pCliente){
		clientes.push_back(pCliente);
	}
	Clientes PSencilla::getCliete(int i){
		return clientes[i];
	}