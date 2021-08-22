#ifndef PERSONA_H
#define PERSONA_H

#include <string>

class Persona
{
public:
	Persona();
	Persona(std::string, std::string, std::string, std::string, std::string, int, int, int);
	~Persona(){}
	//nombre
	void establecerPrimerNombre(std::string);
	std::string obtenerPrimerNombre()const;
	//apellido
	void establecerApellidoPaterno(std::string);
	std::string obtenerApellidoPaterno()const;
	//Identificacion
	void establecerIdentificacion(std::string);
	std::string obtenerIdentificacion()const;
	//telefono
	void establecerTelefono(int);
	int obtenerTelefono()const;
	//edad
	void establecerEdad(int);
	int obtenerEdad()const;
	//ID
	void establecerID(int);
	int obtenerID()const;
	//genero
	void establecerGenero(std::string);
	std::string obtenerGenero()const;
	//TipoPersona
	void establecerTipoPersona(std::string);
	std::string obtenerTipoPersona()const;

	void registrarPersona();
	std::string seleccionarTipo() const;
	virtual void imprimir() const;
	std::string imprimirMessage()const;


private:
	int ID;
	char primerNombre[10];
	char apellidoPaterno[10];
	char identificacion[10];
	char genero[10];
	char tipoPersona[10];
	int telefono;
	int edad;
	


};


#endif // !PERSONA_H

