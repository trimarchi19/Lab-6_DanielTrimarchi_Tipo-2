#ifndef CNACIONAL_H
#define CNACIONAL_H 

#include "ClienteEmpresarial.h"
class CNacional: public ClienteEmpresarial
{
private:
	string rtn;
public:
	CNacional();
	string getRtn();
	void setRtn(string);
		
};
#endif