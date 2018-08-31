#ifndef PSENCILLA_H
#define PSENCILLA_H

#include "PPublicas.h"
#include "Clientes.h"
#include <vector>
using namespace std;
class PSencilla: public PPublicas
{
private:
	vector<Clientes> clientes;
    
public:
	/*
	Contiene el nombre de su aseguradora y clientes, ya sea
empresariales o individuales, no puede tener ambos tipos de clientes.
	*/

	PSencilla();
	~PSencilla();
	void addCliente(Clientes);
	Clientes getCliete(int);
	
};
#endif