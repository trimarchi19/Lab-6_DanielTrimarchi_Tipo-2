#include "ClienteIndividual.h"

		ClienteIndividual::ClienteIndividual(){

		}
	void ClienteIndividual::setGobienro(bool pGob){
			gobierno=pGob;
	}
	void ClienteIndividual::setGrado(string pGrado){
		grado=pGrado;
	}
	void ClienteIndividual::setIndentidad(string pIdenti){
		identidad=pIdenti;
	}
	bool ClienteIndividual::getGobienro(){
		return gobierno;
	}
	string ClienteIndividual::getGrado(){
		return grado;
	}
	string ClienteIndividual::getIndentidad(){
		return identidad;
	}
