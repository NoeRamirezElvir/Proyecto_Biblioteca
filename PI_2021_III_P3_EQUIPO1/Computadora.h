#ifndef COMPUTADORA_H
#define COMPUTADORA_H
#include <string>

class Computadora
{
public:
	Computadora();
	Computadora(int, std::string, std::string, std::string, std::string, std::string, std::string, std::string);

	void establecerIDcomputadora(int);
	int obtenerIDcomputadora()const;
	
	void establecerMarca(std::string);
	std::string obtenerMarca()const;
	
	void establecerModelo(std::string);
	std::string obtenerModelo()const;
	
	void establecerHdd(std::string);
	std::string obtenerHdd()const;
	
	void establecerRam(std::string);
	std::string obtenerRam()const;

	void establecerTipo(std::string);
	std::string obtenerTipo()const;

	void establecerOS(std::string);
	std::string obtenerOS()const;

	void establecerObservacion(std::string);
	std::string obtenerObservacion()const;

	void imprimir()const ;
	

private:
	int IDcomputadora;
	char Marca[10];
	char Modelo[20];
	char HDD[10];
	char ram[8];
	char tipo[10];
	char OS[30];
	char observacion[50];
	
};

#endif // !COMPUTADORA_H




