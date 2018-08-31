#include "PPrivadas.h"	


	PPrivadas::PPrivadas(){

	}
	PPrivadas::~PPrivadas(){

	}
	void PPrivadas::setCliente(Clientes pCliente){
		cliente=pCliente;
	}
	void PPrivadas::setBanco(string pBanco){
		banco=pBanco;
	}
	Clientes PPrivadas::getCliente(){
		return cliente;
	}
	string PPrivadas::getBanco(){
		return banco;
	}
