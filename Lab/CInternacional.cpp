#include "CInternacional.h"
CInternacional::CInternacional(){

}

string CInternacional::getPais(){
	return pais;
}
int CInternacional::getSucursales(){
	return sucursales;
}
void CInternacional::setPais(string pPais){
	pais=pPais;
}
void CInternacional::setSucursales(int pSuc){
	sucursales=pSuc;
}