#include "Plantas.h"

/*
bool funcion;
	int ing,egr,ganancia;
	string nombre,anio,pais;
*/
	Plantas::Plantas(){

	}
	Plantas::~Plantas(){

	}
	void Plantas::setFuncionamiento(bool pFun){
		funcion=pFun;
	}
	void Plantas::setIngresos(int pIng){
		ing=pIng;
	}
	void Plantas::setEgresos(int pEgr){
		egr=pEgr;
	}
	void Plantas::setNombre(string pNom){
		nombre=pNom;
	}
	void Plantas::setAnio(string pAnio){
		anio=pAnio;
	}
	void Plantas::setPais(string pPais){
		pais=pPais;
	}
	void Plantas::setGanacia(int pGan){
		ganancia=pGan;
	}
	bool Plantas::getFuncionamiento(){
		return funcion;
	}
	int Plantas::getIngresos(){
		return ing;
	}
	int Plantas::getEgresos(){
		return egr;
	}
	int Plantas::getGanacia(){
		return ganancia;
	}
	string Plantas::getAnio(){
		return anio;
	}
	string Plantas::getNombre(){
		return nombre;
	}
	string Plantas::getPais(){
		return pais;
	}
	void Plantas::toString(){
		cout<<"Nombre: "<<nombre <<" Pais: "<<pais<<endl;
	}