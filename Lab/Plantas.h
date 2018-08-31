#ifndef PLANTAS_H
#define PLANTAS_H 
// Poseen nombre, año de fundación, país de ubicación, ingresos, egresos, ganancia neta y un
//indicador para comprobar si se encuentra en funcionamiento.
#include <string>
using namespace std;
class Plantas
{
private:
	bool funcion;
	int ing,egr,ganancia;
	string nombre,anio,pais;
public:
	Plantas();
	~Plantas();
	void setFuncionamiento(bool);
	void setIngresos(int);
	void setEgresos(int);
	void setNombre(string);
	void setAnio(string);
	void setPais(string);
	void setGanacia(int);
	
	bool getFuncionamiento();
	int getIngresos();
	int getEgresos();
	int getGanacia();
	string getAnio();
	string getPais();
	string getNombre();


	
};
#endif