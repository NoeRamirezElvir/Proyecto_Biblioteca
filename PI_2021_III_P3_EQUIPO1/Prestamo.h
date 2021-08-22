#ifndef PRESTAMO_H
#define PRESTAMO_H
#include <string>
#include "Daño.h"
#include "Libro.h"
#include "Cliente.h"

class Prestamo : public Cliente
{
public:
	Prestamo();
	Prestamo(int, std::string, std::string, std::string, int, double, double, int, std::string, std::string);

	void establecerPrestamoID(int);
	int obtenerPrestamoID()const;
	void establecerTipoPrestamo(std::string);
	std::string obtenerTipoPrestamo() const;
	void establecerDias(int);
	int obtenerDias() const;
	void establecerCostoDia(double);
	double obtenerCostoDia() const;
	void establecerCostoDaño(double);
	double obtenerCostoDaño() const;

	void establecer_Daño(int);
	int obtener_Daño() const;
	void establecer_TipoDaño(std::string);
	std::string obtener_TipoDaño() const;

	void establecer_Libro(std::string);
	std::string obtener_Libro() const;

	virtual void imprimir() const override;


private:
	int PrestamoID; 
	char tipoPrestamo[30];
	int Dias;
	double costoDia;
	double costoDaño;
	/*Daño daño;
	Libro libro; */
	char Daño_[30];
	int DañoID;
	char Libro[15];
	double costo_Daño; 
};


#endif // !PRESTAMO_H


