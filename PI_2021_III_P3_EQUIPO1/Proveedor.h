#ifndef PROVEEDOR_H
#define PROVEEDOR_H	
#include <string>

class Proveedor
{
public:
	Proveedor();
	~Proveedor(){}
	Proveedor(int, int, std::string, std::string, std::string, std::string, std::string,std::string);
	void establecerID(int);
	int obtenerID() const;
	void establecerTelefono(int);
	int obtenerTelefono() const;
	void establecerNombre(std::string);
	std::string obtenerNombre()const;
	void establecerRtn(std::string);
	std::string obtenerRtn()const;
	void establecerFecha(std::string);
	std::string obtenerFecha()const;
	void establecerDireccion(std::string);
	std::string obtenerDireccion()const;
	void establecerCategoria(std::string);
	std::string obtenerCategoria()const;
	void establecerCiudad(std::string);
	std::string obtenerCiudad()const;

	void imprimir()const;



private:
	int ID;
	int telefono;
	char nombre[10];
	char rtn[10];
	char fecha[10];
	char direccion[15];
	char categoria[15];
	char ciudad[15];
};


#endif // !PROVEEDOR_H

