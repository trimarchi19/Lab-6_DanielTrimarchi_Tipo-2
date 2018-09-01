#include "Plantas.h"
#include "Clientes.h"
#include "CInternacional.h"
#include "CNacional.h"
#include "ClienteIndividual.h"
#include "ClienteEmpresarial.h"
#include "PSencilla.h"
#include "PPublicas.h"
#include "PMixta.h"
#include "PPrivadas.h"
#include <typeinfo>

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
	int borrar;
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
 		<<"5) Ingresar cliente a planta"<<endl
 		<<"6) Destruir Imperio"<<endl
 		<<"Que Desea Hacer?: ";
 		cin>> opcion;
 		switch(opcion){
 			case 1:
 				crearplanta(plantas);
 				//plantas[0].toString();
 				break;
 			case 2:
 				crearcliente(clientes);
 				//cout<< clientes[0]<<endl;
 				break;
 			case 3:
 			cout<<"-------------------------------------"<<endl;
 			if(plantas.size()>0){
 				for(int i=0;i<plantas.size();i++){
 					cout<<i<<") ";plantas[i].toString();
 				}
 				cout<<"Cual dese borrar: ";
 				cin>> borrar;
 				plantas.erase (plantas.begin()+borrar);
 			}
 				break;
 			case 4:
 			cout<<"-------------------------------------"<<endl;
 			 			if(clientes.size()>0){
 				for(int i=0;i<clientes.size();i++){
 					cout<<i<<") ";clientes[i].toString();
 				}
 				cout<<"Cual dese borrar: ";
 				cin>> borrar;
 				clientes.erase(clientes.begin()+borrar);
 				}
 				break;
 			case 5:
 			int pos;
 				//cout<<"No se implemento esta Función"<<endl;
 					if(plantas.size()>0){
 				for(int i=0;i<plantas.size();i++){
 					cout<<i<<") ";plantas[i].toString();
 				}
 				cout<<" a cual desea agregar: ";
 				cin >>pos;
 				if(typeid(plantas[pos])==typeid(PSencilla)){
 					//plantas[pos]->addCliente()
 				}
 				}
 				break;
 			case 6:
 			cout<<"-------------------------------------"<<endl;
 				clientes.clear();
 				plantas.clear();
 				cout<<"Se elimino todo...."<<endl;
 				break;

 		}

 	}while(opcion!=6);

	return 0;
}
void crearplanta(vector<Plantas>& plantas){
	int opcion,ingresos=0,egresos,ganancia=0,funcionamiento;
	bool activa=false;
	string anio,pais,nom;
	/*

 Poseen nombre, año de fundación, país de ubicación, ingresos, egresos, ganancia neta y un
indicador para comprobar si se encuentra en funcionamiento.
	*/
	cout<<"Ingrese el Nombre:";
	cin>>nom;
	cout<<"Ingrese el año: ";
	cin >>anio;
	cout<<"Ingrese la ubicacion: ";
	cin >>pais;

	cout<<"Ingrese egresos: ";
	cin >>egresos;
	cout<<"1) Si"<<endl<<"2) No"<<endl<<"Esta en funcionamiento?: ";
	cin>>funcionamiento;
	if(funcionamiento==1){
		activa=true;
	}else{
		activa=false;
	}
	/*
	setNombre();
	setIngresos();
	setEgresos();
	setGanacia();
	setPais();
	setFuncionamiento();
	*/
 	do{
 	cout<<"1) Publicas"<<endl
 	<<"2) Privadas"<<endl
 	<<"Que tipo de Cliente desea crear?:";
 	cin >> opcion;
 	}while(opcion<1||opcion>2);
 	cout<<endl;
 	switch(opcion){
 		case 1:
 		{
 			int opt,cant;
 			string aseguradora;
 					cout<<"1) Sencilla"<<endl
 					<<"2) Mixta"<<endl
 					<<"Que tipo de Cliente Empresarial desea crear?:";
 					cin >> opt;
 					cout<<endl;
 					cout<<"Nombre de la aseguradora:";
 					cin>>aseguradora;
 					cout<<"Ingrese la cantidad maxima de clientes: ";
 					cin >>cant;
 					switch(opt){
 						case 1:
 						{
 							PSencilla* ps=new PSencilla();
 							ps->setNoombre(aseguradora);
 							ps->setMaxc(cant);
 							ps->setNombre(nom);
							ps->setIngresos(ingresos);
							ps->setEgresos(egresos);
							ps->setGanacia(ganancia);
							ps->setPais(pais);
							ps->setFuncionamiento(activa);
							ps->setAnio(anio);
							plantas.push_back(*ps);
 							}
 							break;
 						
 						case 2:
 						{
 							 PMixta* ps=new PMixta();
 							ps->setNoombre(aseguradora);
 							ps->setMaxc(cant);
 							ps->setNombre(nom);
							ps->setIngresos(ingresos);
							ps->setEgresos(egresos);
							ps->setGanacia(ganancia);
							ps->setPais(pais);
							ps->setFuncionamiento(activa);
							ps->setAnio(anio);
							plantas.push_back(*ps);
 								}
 							break;


 					}
 				}
 			break;
 			case 2:
 			{
 				string banco;
 				cout<<"Ingrese banco afiliado: ";
 				cin>> banco;

 							 PPrivadas* ps=new PPrivadas();
 							 ps->setBanco(banco);
 							ps->setNombre(nom);
							ps->setIngresos(ingresos);
							ps->setEgresos(egresos);
							ps->setGanacia(ganancia);
							ps->setPais(pais);
							ps->setFuncionamiento(activa);
							ps->setAnio(anio);
							plantas.push_back(*ps);

 			}
 			break;


 	};

}
 
 void crearcliente(vector<Clientes>& clientes){
 	int opcion,fondo;
 	string nom;
 	cout<<"Ingre el Nombre: ";
 	cin >>nom;
 	cout<<"Ingrese el fondo total: ";
 	cin>> fondo;
 	do{
 	cout<<"1) Empresarial"<<endl
 	<<"2) Individual"<<endl
 	<<"Que tipo de Cliente desea crear?:";
 	cin >> opcion;
 	}while(opcion<1||opcion>2);
 	cout<<endl;
 		switch(opcion){
 			case 1:// Cliente EMpresarial
 				int popularidad,opt;
 					cout<<"1) Internacional"<<endl
 					<<"2) Nacional"<<endl
 					<<"Que tipo de Cliente Empresarial desea crear?:";
 					cin >> opt;
 					do
 					{
 						cout<<"Ingrese la Popularidad[1-10]: ";
 						cin >> popularidad;
 					} while (popularidad<1|| popularidad>10);//do while que valida el size de la popularidad
 					cout<<endl;
 					switch(opt){
 						case 1:// Cliente Internacional y Variables a mandar
 						{
 							string pais;
 							int sucursales;
 							cout << "Ingrese el Pais: ";
 							cin >> pais;
 							cout <<"Ingrese el numero de Sucursales: ";
 							cin >> sucursales;
 							CInternacional* inter=new CInternacional();
 							inter->setPais(pais);
 							inter->setSucursales(sucursales);
 							inter->setPopularidad(popularidad);
 							inter->setFondo(fondo);
 							inter->setNombre(nom);
 							cout<<endl<<inter->getPopularidad();
 							clientes.push_back(*inter);
 							


 						}
 							break;

 						case 2:
 						{
 							string rtn;
 							cout<<"Ingrese el Rtn: ";
 							cin >> rtn;
 							CNacional* cn=new CNacional;
 							cn->setRtn(rtn);
 							cn->setPopularidad(popularidad);
 							cn->setFondo(fondo);
 							cn->setNombre(nom);
 							clientes.push_back(*cn);
 						}
 							break;
 					};
 					break;
 			case 2://Cliente Individual
 				{ //: Tiene numero de identidad, grado de estudio (licenciatura, doctorado, etc) y un identificador para comprobar si trabaja con el gobierno.
 					bool gobierno;
 					int p;
 					string identidad,grado;
 					cout<<"Ingrese su grado: ";
 					cin >> grado;
 					cout<<"Ingrese la identidad: ";
 					cin >>identidad;
 					cout<<"Pertenece al gobierno:"<<endl
 					<<"1) Si"<<endl
 					<<"2) No"<<endl
 					<<"Elija: ";
 					cin >>p;
 					if(p==1){
 						gobierno=true;
 					}
 					else{
 						gobierno=false;
 					}
 					ClienteIndividual* ci=new ClienteIndividual();
 					ci->setIdentidad(identidad);
 					ci->setGrado(grado);
 					ci->setGobierno(gobierno);
 					 							ci->setFondo(fondo);
 							ci->setNombre(nom);
 					clientes.push_back(*ci);
 				}
 				break;
 				
 		};




 }









					/* code 
	//cout<<dynamic_cast<Cuadrado*>(figuras[i])<<endl;
		if(dynamic_cast<Cuadrado*>(figuras[i])){
						cout<<"Hola"<<endl;
	}else if(dynamic_cast<Circulo*>(figuras[i])){
	cout<<"HIIIIIIIIIIIII"<<endl;
			}
								*/
