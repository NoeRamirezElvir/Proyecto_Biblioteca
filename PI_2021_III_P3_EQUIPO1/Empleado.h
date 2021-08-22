#ifndef EMPLEADO_H
#define EMPLEADO_H 

#include <string>
#include "Persona.h"

class Empleado : public Persona
{
public:
	Empleado();
	Empleado(int, std::string, std::string, int, std::string, double, double, double, double, std::string, std::string);  
	//fecha de ingreso
	void establecerFechaIngreso(std::string);
	std::string obtenerFechaIngreso() const;
	//sueldo
	void establecerSueldo(double);
	double obtenerSueldo() const;
	//horas extras
	void establecerHorasExtras(double);
	double obtenerHorasExtras() const;
	//precio de horas extras
	void establecerPrecioHorasE(double);
	double obtenerPrecioHorasE() const;
	//ventas
	void establecerCantVentas(double);
	double obtenerCantVentas() const;
	//departamento
	void establecerDepartamento(std::string);
	std::string obtenerDepartamento() const;
	//ID
	void establecerEmpleadoID(int);
	int obtenerEmpleadoID() const;
	//Sucursal
	void establecerSucursal(std::string);
	std::string obtenerSucursal() const;

	void registrarEmpleado();
	double calcularIngresos();
	virtual void imprimir() const override;

private:
	int EmpleadoID;
	char fechaIngreso[30];
	double Sueldo;
	double horasExtras;
	double precioHrsE;
	double cantVentas;
	char Departamento[20];
	char Sucursal[50];
	//Sucursal sucursal;
};


#endif // !EMPLEADO_H
