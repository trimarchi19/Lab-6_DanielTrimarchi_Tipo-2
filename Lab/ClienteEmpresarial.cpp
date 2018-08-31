#include "ClienteEmpresarial.h"

ClienteEmpresarial::ClienteEmpresarial(){

}
 void ClienteEmpresarial::setNumero(string pNumero){
 	numero=pNumero;
 }
 void ClienteEmpresarial::setPopularidad(int pPopularidad){
 	popularidad=pPopularidad;
 }
  string ClienteEmpresarial::getNumero(){
 	return numero;
 }
 int ClienteEmpresarial::getPopularidad(){
 	return popularidad;
 }