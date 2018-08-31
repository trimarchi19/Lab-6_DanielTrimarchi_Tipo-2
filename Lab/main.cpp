#include "Plantas.h"
#include "Clientes.h"
#include <iostream>
#include <string>
#include <vector>

using namespace std;

 void crearplanta(vector<Plantas>&);
 void crearcliente(vector<Clientes>&);
void eliminarplanta();
void eliminarcliente();
void listarplantas();
void destruir();

int main(){
 vector<Plantas> plantas;
 vector<Clientes> clientes;
 int opcion;
 	do{
 		cout<<"--------------------------------"<<endl
 		<<"					MENU PRINCIPAL"<<endl
 		<<"1) Crear Planta"<<endl
 		<<"2) Crear Cliente"<<endl
 		<<"3) Eliminar Planta"<<endl
 		<<"4) Eliminar Cliente"<<endl
 		<<"5) Listar Plantas"<<endl
 		<<"6) Destruir Imperio"<<endl
 		<<"7) Salir"<<endl
 		<<"Que Desea Hacer?: ";
 		cin>> opcion;
 		switch(opcion){
 			case 1:
 				crearplanta(plantas);
 				break;
 			case 2:
 				crearcliente(clientes);
 				break;
 			case 3:
 				break;
 			case 4:
 				break;
 			case 5:
 				break;
 			case 6:
 				break;

 		}

 	}while(opcion!=5);

	return 0;
}
 void crearplanta(vector<Plantas>&){




 }
 void crearcliente(vector<Clientes>&){
 	int opcion;
 	do{
 	cout<<"1) Empresarial"<<endl
 	<<"2) Individual"<<endl
 	<<"Que tipo de Cliente desea crear?:";
 	cin >> opcion;
 	}while(opcion<1||opcion>2);
 		switch(opcion){
 			case 1:
 				break;
 			case 2:
 				break;
 		}




 }









					/* code 
	//cout<<dynamic_cast<Cuadrado*>(figuras[i])<<endl;
		if(dynamic_cast<Cuadrado*>(figuras[i])){
						cout<<"Hola"<<endl;
	}else if(dynamic_cast<Circulo*>(figuras[i])){
	cout<<"HIIIIIIIIIIIII"<<endl;
			}
								*/
