#ifndef CLIENTES_H
#define CLIENTES_H
#include <string>
#include <iostream>

using namespace std;

class Clientes{
	private:
	int fondo;
	string nombre;

public:
	void toString();
	Clientes();
	int getFondo();
	void setFondo(int);
	string getNombre();
	void setNombre(string);

};
#endif