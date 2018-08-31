#ifndef PRPIVADAS_H
#define PRPIVADAS_H
#include "Plantas.h" 
#include "Clientes.h"
/*
Tiene un solo cliente ya sea empresarial o individual y el nombre de un
banco en el cual el cliente este afiliado
*/
class PPrivadas: public Plantas
{
private:
	Clientes cliente;
	string banco;
public:
	PPrivadas();
	~PPrivadas();
	void setCliente(Clientes);
	void setBanco(string);
	Clientes getCliente();
	string getBanco();

	
};
#endif