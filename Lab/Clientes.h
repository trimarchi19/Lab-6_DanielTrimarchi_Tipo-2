#ifndef CLIENTES_H
#define CLIENTES_H
#include <string>
using namespace std;

class Clientes{
	private:
	int fondo;
	string nombre;

public:
	Clientes();
	int getFondo();
	void setFondo(int);
	string getNombre();
	void setNombre(string);

};
#endif