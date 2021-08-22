#ifndef SALALECTURA_H
#define SALALECTURA_H
#include "Empleado.h"
#include <string>

class SalaLectura
{
public:
	SalaLectura();
	SalaLectura(int, int, std::string, std::string);
	~SalaLectura(){}
	void establecerID(int);
	int obtenerID()const;
	void establecerCapacidad(int);
	int obtenerCapacidad()const;
	void establecerEncargado(std::string);
	std::string obtenerEncargado()const;
	void establecerTipoSala(std::string);
	std::string obtenerTipoSala()const;
	void establecerDisponibilidad(std::string);
	std::string obtenerDisponibilidad()const;

	void imprimir()const;
	std::string asignarEncargado(Empleado)const;

private:
	int ID;
	int capacidad;
	Empleado empleado;
	char encargado[15];
	char tipoSala[20];
	char disponibilidad[15];
};



#endif // !SALALECTURA_H
