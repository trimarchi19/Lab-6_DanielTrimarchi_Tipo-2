#ifndef CINTERNACIONAL_H
#define CINTERNACIONAL_H 
#include "ClienteEmpresarial.h"
class CInternacional: public ClienteEmpresarial
{
private:
	string pais;
	int sucursales;
public:
		string getPais();
	int getSucursales();
	void setPais(string);
	void setSucursales(int);
	CInternacional();
	
};
#endif