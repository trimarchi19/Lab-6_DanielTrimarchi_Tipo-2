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
	void setGobienro(bool);
	void setGrado(string);
	void setIndentidad(string);
	bool getGobienro();
	string getGrado();
	string getIndentidad();
	
};
#endif