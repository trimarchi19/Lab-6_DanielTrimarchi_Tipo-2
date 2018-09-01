#include "ClienteIndividual.h"

		ClienteIndividual::ClienteIndividual(){

		}
	void ClienteIndividual::setGobierno(bool pGob){
			gobierno=pGob;
	}
	void ClienteIndividual::setGrado(string pGrado){
		grado=pGrado;
	}
	void ClienteIndividual::setIdentidad(string pIdenti){
		identidad=pIdenti;
	}
	bool ClienteIndividual::getGobierno(){
		return gobierno;
	}
	string ClienteIndividual::getGrado(){
		return grado;
	}
	string ClienteIndividual::getIdentidad(){
		return identidad;
	}
