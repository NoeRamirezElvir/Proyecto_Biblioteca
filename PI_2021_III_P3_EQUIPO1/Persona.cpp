#include <string>
#include <iostream>
#include <stdexcept>

#include "Persona.h"

using namespace std;

Persona::Persona() {
	establecerApellidoPaterno("   ");
	establecerIdentificacion("   ");
	establecerPrimerNombre("   ");
	establecerTipoPersona("   ");
	establecerGenero("   ");
	establecerTelefono(0);
	establecerEdad(0);
	establecerID(0);
}
Persona::Persona(string nom, string apel, string ident, string _tipoPersona,string gen, int tel, int ed, int Id) {
	establecerApellidoPaterno(apel);
	establecerIdentificacion(ident);
	establecerPrimerNombre(nom);
	establecerTelefono(tel);
	establecerEdad(ed);
	establecerID(Id);
	establecerTipoPersona(_tipoPersona);
	establecerGenero(gen);
}
void Persona::establecerPrimerNombre(string nom) {
	int longitud = (int)nom.size();
	longitud = (longitud < 10 ? longitud : 9);
	if (longitud < 3)
		cerr << "Nombre invalido" << endl;
	nom.copy(primerNombre, longitud);
	primerNombre[longitud] = '\0';
}
string Persona::obtenerPrimerNombre() const {
	return primerNombre;
}
void Persona::establecerApellidoPaterno(string apel) {
	int longitud = (int)apel.size();
	if (longitud < 3)
		cerr << "Apellido invalido";
	longitud = (longitud < 10 ? longitud : 9);
	apel.copy(apellidoPaterno, longitud);
	apellidoPaterno[longitud] = '\0';
}
string Persona::obtenerApellidoPaterno()const {
	return apellidoPaterno;
}
void Persona::establecerIdentificacion(string ident) {
	int longitud = (int)ident.size();
	if (longitud < 3)
		cerr << "Identificacion invalida" << endl;
	longitud = (longitud < 10 ? longitud : 9);
	ident.copy(identificacion, longitud);
	identificacion[longitud] = '\0';
}
string Persona::obtenerIdentificacion()const {
	return identificacion;
}
void Persona::establecerTelefono(int tel) {
	if (tel < 0)
		cerr << "Numero de telefono invalido" << endl;
	telefono = tel;
}
int Persona::obtenerTelefono()const {
	return telefono;
}
void Persona::establecerEdad(int ed) {
	if (ed < 0)
		cerr << "Edad invalida" << endl;
	edad = ed;
}
int Persona::obtenerEdad()const {
	return edad;
}
void Persona::establecerID(int Id) {
	if (Id < 0)
		cerr << "Numero de ID invalido" << endl;
	ID = Id;
}
int Persona::obtenerID()const {
	return ID;
}
void Persona::establecerTipoPersona(string _tipoPersona) {
	int longitud = (int)_tipoPersona.size();
	if (longitud < 3)
		cerr << "Categoria invalida" << endl;
	longitud = (longitud < 10 ? longitud : 9);
	_tipoPersona.copy(tipoPersona, longitud);
	tipoPersona[longitud] = '\0';
}
string Persona::obtenerTipoPersona()const {
	return tipoPersona;
}
void Persona::establecerGenero(string gen) {
	int longitud = (int)gen.size();
	if (longitud < 3)
		cerr << "Categoria invalida" << endl;
	longitud = (longitud < 10 ? longitud : 9);
	gen.copy(genero, longitud);
	genero[longitud] = '\0';
}
string Persona::obtenerGenero()const {
	return genero;
}
void Persona::registrarPersona() {
	string nombre, apellido, identificacion, categoria, genero, tipoPersona;
	int telefono, ID, edad;
	cin.ignore();

	cout << "Escriba la informacion solicitada." << endl;
	cout << "ID de la persona: "; cin >> ID;
	establecerID(ID);
	cout << "Nombre: "; cin >> nombre;
	establecerPrimerNombre(nombre);
	cout << "Apellido: "; cin >> apellido;
	establecerApellidoPaterno(apellido);
	cout << "Edad: "; cin >> edad;
	establecerEdad(edad);
	cout << "Numero de telefono: "; cin >> telefono;
	establecerTelefono(telefono);
	cout << "Numero de identidad: "; cin >> identificacion;
	establecerIdentificacion(identificacion);
	cout << "Genero: "; cin >> genero;
	establecerGenero(genero);
	tipoPersona = seleccionarTipo();
	establecerTipoPersona(tipoPersona);

	
}
string Persona::seleccionarTipo()const {
	string seleccion,tipo;
	cout << "Eliga el tipo de persona a registrar: " << endl;
	cout << "A - Cliente" << endl;
	cout << "B - Empleado" << endl;
	if (seleccion == "A"||seleccion=="a")
	{
		tipo = "Cliente";
	}
	else if (seleccion=="B"||seleccion=="b")
	{
		tipo = "Empleado";
	}
	else
	{
		cout << "Opcion no valida." << endl;
	}
	return tipo;
}
void Persona::imprimir()const {
	cout << "ID: " << obtenerID() << endl;
	cout << "Tipo: " << obtenerTipoPersona() << endl;
	cout << "Nombre: " << obtenerPrimerNombre() << endl;
	cout << "Apellido: " << obtenerApellidoPaterno() << endl;
	cout << "Edad: " << obtenerEdad() << endl;
	cout << "Genero: " << obtenerGenero() << endl;
	cout << "Telefono: " << obtenerTelefono() << endl;
	cout << "Identificacion: " << obtenerIdentificacion() << endl;
}
string Persona::imprimirMessage()const {
	return  obtenerPrimerNombre() + " " + obtenerApellidoPaterno();
}
