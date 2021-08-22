#ifndef CLIENTE_H
#define CLIENTE_H

#include <string>
#include "Persona.h"
#include "Libro.h"

class Cliente : public Persona
{
public:
	Cliente();
	Cliente(std::string, std::string, std::string, std::string, std::string, int, int, int, std::string, std::string, std::string,std::string, int, double, int);
	//direccion
	void establecerDireccion(std::string);
	std::string obtenerDireccion()const;
	//ocupacion
	void establecerOcupacion(std::string);
	std::string obtenerOcupacion()const;
	//corre
	void establecerCorreo(std::string);
	std::string obtenerCorreo()const;
	//membresia
	void establecerMembresia(std::string);
	std::string obtenerTipoMembresia()const;
	//año de ingreso
	void establecerAñoIngreso(int);
	int obtenerAñoIngreso()const;
	//saldo
	void establecerSaldo(double);
	double obtenerSaldo()const;
	//ID Cliente
	void establecerIDcliente(int);
	int obtenerIDcliente()const;

	virtual void imprimir() const override;
	std::string otorgarMembresia() const;
	void registrarCliente();
	void crearListaLibros(Libro, int)const;
	void registrarLibros()const;



private:
	char direccion[10];
	char ocupacion[20];
	char correo[20];
	char tipoMembresia[8];
	int añoIngreso;
	double saldo;
	int IDcliente;
	Libro libros[5];
};





#endif // !CLIENTE_H
