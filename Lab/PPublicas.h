#ifndef PPUBLICAS
#define PPUBLICAS

#include "Plantas.h"
class PPublicas: public Plantas
{
	/*Tienen un número máximo de clientes y el nombre de una aseguradora
afiliada.
▪ Pl
*/
private:
	int maxc;
	string nombre;
public:
	PPublicas();
	void setNoombre(string);
	string getNoombre();
	void setMaxc(int);
	int getMaxc();

	
};
#endif