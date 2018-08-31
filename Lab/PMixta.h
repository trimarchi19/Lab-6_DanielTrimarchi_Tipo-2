#ifndef PMIXTA_H
#define PMIXTA_H 
#include "PPublicas.h"
#include "Clientes.h"
#include <vector>
using namespace std;
class PMixta: public PPublicas
{
private:
	vector<Clientes> clientes;
public:

	PMixta();
	~PMixta();
	void addCliente(Clientes);
	Clientes getCliete(int);
	
};
#endif