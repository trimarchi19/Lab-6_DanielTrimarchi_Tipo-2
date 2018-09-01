main: main.o Clientes.o Plantas.o ClienteEmpresarial.o ClienteIndividual.o PMixta.o PSencilla.o CNacional.o CInternacional.o PPrivadas.o PPublicas.o 

	g++ main.o Clientes.o Plantas.o ClienteEmpresarial.o ClienteIndividual.o PMixta.o PSencilla.o CNacional.o CInternacional.o PPrivadas.o PPublicas.o -o main
		rm *.o	
main.o:	main.cpp Clientes.h Plantas.h
	g++ -c main.cpp
Clientes.o: Clientes.cpp Clientes.h ClienteEmpresarial.h ClienteIndividual.h 
	g++ -c Clientes.cpp
Plantas.o: Plantas.cpp Plantas.h PPublicas.h PPrivadas.h PSencilla.h PMixta.h
	g++ -c Plantas.cpp
ClienteEmpresarial.o: ClienteEmpresarial.h ClienteEmpresarial.cpp
	g++ -c ClienteEmpresarial.cpp
ClienteIndividual.o: ClienteIndividual.cpp ClienteIndividual.h
	g++ -c ClienteIndividual.cpp
PMixta.o: PMixta.h PMixta.cpp
	g++ -c PMixta.cpp
PSencilla.o: PSencilla.h PSencilla.cpp
	g++ -c PSencilla.cpp
CNacional.o:CNacional.cpp CNacional.h
	g++ -c CNacional.cpp
CInternacional.o: CInternacional.cpp CInternacional.h
	g++ -c CInternacional.cpp
PPrivadas.o: PPrivadas.h PPrivadas.h
	g++ -c PPrivadas.cpp
PPublicas.o: PPublicas.cpp PPublicas.h
	g++ -c PPublicas.cpp


