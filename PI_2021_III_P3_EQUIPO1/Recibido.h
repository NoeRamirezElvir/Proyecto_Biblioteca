#ifndef RECIBIDO_H
#define RECIBIDO_H	
#include <string>
#include "Empleado.h"
#include "Proveedor.h"
class Recibido
{
public:
	Recibido();
	Recibido(int, int, std::string, std::string, std::string,std::string);
	~Recibido(){}
	void establecerID(int);
	int obtenerID()const;
	void establecerCantidadL(int);
	int obtenerCantidadL()const;
	void establecerEncargado(std::string);
	std::string obtenerEncargado()const;
	void establecerNombreProveedor(std::string);
	std::string obtenerNombreProveedor()const;
	void establecerFecha(std::string);
	std::string obtenerFecha()const;
	void establecerHora(std::string);
	std::string obtenerHora()const;

	std::string obtenerNombreEncargado(Empleado)const;
	std::string asignarProveedor(Proveedor)const;
	void imprimir()const;

private:
	int ID;
	int cantidadLibros;
	Empleado empleado;
	Proveedor proveedor;
	char encargado[15];
	char nomProveedor[15];
	char fecha[10];
	char hora[6];
	

};

#endif // !RECIBIDO_H



