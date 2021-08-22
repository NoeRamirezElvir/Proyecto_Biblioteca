#ifndef SALACOMPUTO_H
#define SALACOMPUTO_H
#include <string>
#include "Empleado.h"

class SalaComputo
{
public:
	SalaComputo();
	SalaComputo(int, std::string, std::string, int, std::string);
	
	void establecerId(int);
	int obtenerId()const;

	void establecerHorario(std::string);
	std::string obtenerHorario()const;

	void establecerDisponibilidad(std::string);
	std::string obtenerDisponibilidad()const;

	void establecerCapacidad(int);
	int obtenerCapacidad()const;

	void establecerEncargado(std::string);
	std::string obtenerEncargado()const;

	std::string asignarEncargado(Empleado)const;
	void imprimir()const;
private:
	int ID;
	char horario[10];
	char disponibilidad[15];
	int capacidad;
	Empleado empleado;
	char encargado[20];
	
};

#endif // !SALACOMPUTO_H

