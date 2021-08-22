#ifndef FACTURA_H
#define FACTURA_H
#include <string>
#include "Daño.h"
#include "Cliente.h"
#include "Empleado.h"
#include "Daño.h"
#include "Prestamo.h"

class Factura : public Prestamo, Daño
{
public:
	Factura();
	Factura(int, int, std::string, std::string, std::string, std::string, std::string);

	void establecerFacturaID(int);
	int obtenerFacturaID() const;
	void establecerAño(int);
	int obtenerAño() const;
	void establecerMes(std::string);
	std::string obtenerMes() const;
	void establecerDias(int);
	int obtenerDias() const;
	void establecerHora(std::string);
	std::string obtenerHora() const;
	void establecerEmpleadoNombre(std::string);
	std::string obtenerEmpleadoNombre() const;
	void establecerEmpleadoApellido(std::string);
	std::string obtenerEmpleadoApellido() const;
	void establecerPrestamo(std::string);
	std::string obtenerPrestamo() const;
	void establecerDaño(std::string);
	std::string obtenerDaño() const;

	void calcularTotal(double, double, int);
	double obtenerTotal() const;
	void imprimir();
	void registrar();

private:
	int facturaID;
	int Año;
	char Mes[12];
	int Dias;
	char Hora[8];
	/*Empleado empleado;
	Prestamo prestamo;*/
	char empleadoNombre[10];
	char empleadoApellido[10];
	char prestamo_[30];
	char damage[30];
	double totalPagar;
};



#endif // !FACTURA_H

