main: main.o Plantas.o Clientes.o
	g++ main.o Cleintes.o Plantas.o -o main
		rm *.o	
main.o:	main.cpp Clientes.h PLantas.h
	g++ -c main.cpp
Clientes.o: Clientes.cpp Clientes.h ClienteEmpresarial.h ClienteIndividual.h 
	g++ -c Clientes.cpp
Plantas.o: Plantas.cpp Plantas.h PPublicas.h PPrivada.h PSencillas.h PMixtas.h
	g++ -c Plantas.cpp
