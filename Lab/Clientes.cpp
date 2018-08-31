#include "Clientes.h"

Clientes::Clientes(){

}
int Clientes::getFondo(){
	return fondo;
}
void Clientes::setFondo(int pFondo){
	fondo=pFondo;
}
string Clientes::getNombre(){
	return nombre;
}
void Clientes::setNombre(string pNombre){
	nombre=pNombre;
}
