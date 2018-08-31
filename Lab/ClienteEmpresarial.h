#ifndef CLIENTEEMPRESARIAL_H
#define CLIENTEEMPRESARIAL_H 
#include "Clientes.h"

#include <string>

class ClienteEmpresarial: public Clientes{

protected:
private:
	string numero;
	int popularidad;
public:
	string getNumero();
	int getPopularidad();
	void setPopularidad(int);
	void setNumero(string);
	ClienteEmpresarial();
	
};
#endif