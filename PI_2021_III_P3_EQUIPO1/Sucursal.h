#ifndef SUCURSAL_H
#define SUCURSAL_H
#include <string>
class Sucursal
{
public:
	Sucursal();
	Sucursal(int, std::string, std::string, std::string, std::string);

	void establecerIDSucursal(int);
	int obtenerIDSucursal()const;

	void establecerCiudad(std::string);
	std::string obtenerCiudad()const;

	void establecerDireccion(std::string);
	std::string obtenerDireccion()const;

	void establecercantEmpleados(std::string);
	std::string obtenerCantEmpleados()const;

	void establecerNombre(std::string);
	std::string obtenerNombre()const;

private:
	int id;
	char nombre[50];
	char ciudad[20];
	char direccion[30];
	char cantEmpleados[10];
};

#endif // !SUCURSAL_H

