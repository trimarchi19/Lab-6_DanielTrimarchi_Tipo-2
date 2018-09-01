#ifndef CLIENTEINDIVIDUAL_H
#define CLIENTEINDIVIDUAL_H 

#include "Clientes.h"
class ClienteIndividual: public Clientes
{
private:
	bool gobierno;
	string grado,identidad;

public:
		ClienteIndividual();
	void setGobierno(bool);
	void setGrado(string);
	void setIdentidad(string);
	bool getGobierno();
	string getGrado();
	string getIdentidad();
	
};
#endif