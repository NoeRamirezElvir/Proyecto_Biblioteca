#include <iostream>
#include <string>
#include <stdlib.h>

#include "Cliente.h"
#include "Libro.h"

using namespace std;
Cliente::Cliente() {
	establecerDireccion("        ");
	establecerOcupacion("        ");
	establecerCorreo("        ");
	establecerMembresia("    ");
	establecerAñoIngreso(0);
	establecerSaldo(0.00);
	establecerIDcliente(0);
}
Cliente::Cliente(string nom, string apel, string ident, string _tipoPersona, string gen, int tel, int ed, int Id, string dir, string _ocupacion, string email, string _tipoMembresia, int _añoIngreso, double _saldo, int _IDcliente)
	: Persona(nom, apel, ident, _tipoPersona, gen, tel, ed, Id) {
	establecerDireccion(dir);
	establecerOcupacion(_ocupacion);
	establecerCorreo(email);
	establecerMembresia(_tipoMembresia);
	establecerAñoIngreso(_añoIngreso);
	establecerSaldo(_saldo);
	establecerIDcliente(_IDcliente);
}
void Cliente::establecerDireccion(string dir) {
	int longitud = (int)dir.size();
	if (longitud < 7)
		cerr << "Tipo de cliente invalido" << endl;
	longitud = (longitud < 10 ? longitud : 9);
	dir.copy(direccion, longitud);
	direccion[longitud] = '\0';
}
string Cliente::obtenerDireccion()const {
	return direccion;
}
void Cliente::establecerOcupacion(string _ocupacion) {
	int longitud = (int)_ocupacion.size();
	if (longitud < 4)
		cerr << "Ocupacion invalida" << endl;
	longitud = (longitud < 20 ? longitud : 19);
	_ocupacion.copy(ocupacion, longitud);
	ocupacion[longitud] = '\0';
}
string Cliente::obtenerOcupacion()const {
	return ocupacion;
}
void Cliente::establecerCorreo(string email) {
	int longitud = (int)email.size();
	if (longitud < 7)
		cerr << "Tipo de pago incorrecto" << endl;
	longitud = (longitud < 20 ? longitud : 19);
	email.copy(correo, longitud);
	correo[longitud] = '\0';
}
string Cliente::obtenerCorreo()const {
	return correo;
}
void Cliente::establecerMembresia(string _tipoMembresia) {
	int longitud = (int)_tipoMembresia.size();
	if (longitud < 4)
		cerr << "Tipo de pago incorrecto" << endl;
	longitud = (longitud < 8 ? longitud : 7);
	_tipoMembresia.copy(tipoMembresia, longitud);
	tipoMembresia[longitud] = '\0';
}
string Cliente::obtenerTipoMembresia()const {
	return tipoMembresia;
}
void Cliente::establecerAñoIngreso(int _añoIngreso) {
	if (_añoIngreso < 0)
		cerr << "Año de ingreso incorrecto" << endl;
	añoIngreso = _añoIngreso;
}
int Cliente::obtenerAñoIngreso()const {
	return añoIngreso;
}
void Cliente::establecerSaldo(double _saldo) {
	if (_saldo < 0)
		cerr << "Saldo incorrecto" << endl;
	saldo = _saldo;
}
double Cliente::obtenerSaldo()const {
	return saldo;
}
void Cliente::establecerIDcliente(int _IDcliente) {
	if (_IDcliente < 0)
		cerr << "ID del cliente incorrecto" << endl;
	IDcliente = _IDcliente;
}
int Cliente::obtenerIDcliente()const {
	return IDcliente;
}
void Cliente::registrarCliente() {
	string nombre, apellido, identificacion, direccion, correo, ocupacion, tipoMembresia;
	int edad, ID, telefono, IDcliente, año;
	double saldo;
	//
	cout << "Bienvenido, ingrese los siguientes datos" << endl;
	cout << "Nombre: " << endl;
	getline(cin, nombre);
	establecerPrimerNombre(nombre);
	//
	cout << "Apellido: " << endl;
	//cin.ignore();
	getline(cin, apellido);
	establecerApellidoPaterno(apellido);
	//
	cout << "Identificacion: " << endl;
	//cin.ignore();
	getline(cin, identificacion);
	establecerIdentificacion(identificacion);
	//
	cout << "Direccion: " << endl;
	//cin.ignore();
	getline(cin, direccion);
	establecerDireccion(direccion);
	//
	cout << "Telefono: " << endl;
	cin >> telefono;
	establecerTelefono(telefono);
	//
	cout << "Correo: " << endl;
	cin.ignore();
	getline(cin, correo);
	establecerCorreo(correo);
	//
	cout << "Edad: " << endl;
	cin >> edad;
	establecerEdad(edad);
	//
	cout << "ID: " << endl;
	cin >> ID;
	establecerID(ID);
	//
	cout << "Escriba la ocupacion del cliente: " << endl;
	cin.ignore();
	getline(cin, ocupacion);
	establecerOcupacion(ocupacion);
	//
	cout << "Ingrese el tipo de membresia: " << endl;
	tipoMembresia = otorgarMembresia();
	establecerMembresia(tipoMembresia);
	//
	cout << "Escriba el ID del cliente: " << endl;
	cin >> IDcliente;
	establecerIDcliente(IDcliente);
	//
	cout << "Año de ingreso: " << endl;
	cin >> año;
	establecerAñoIngreso(año);
	//
	cout << "Ingrese el saldo: " << endl;
	cin >> saldo;
	establecerSaldo(saldo);
	establecerTipoPersona("Cliente");
	
}
void Cliente::imprimir()const {
	Persona::imprimir();
	cout << "ID cliente: " << obtenerIDcliente() << endl;
	cout << "Direccion: " << obtenerDireccion() << endl;
	cout << "Ocupacion: " << obtenerOcupacion() << endl;
	cout << "Correo: " << obtenerCorreo() << endl;
	cout << "Tipo de membresia: "<<obtenerTipoMembresia() << endl;
	cout << "Saldo: "<<obtenerSaldo() << endl;
}
string Cliente::otorgarMembresia()const {
	string membresia, tipoMembresia;
	cout << "	  A - Clasica" << endl;
	cout << "	  B - Premium" << endl;
	cout << "	  C - Mixta" << endl;
	cin >> membresia;
	if ((membresia == "A") || (membresia == "a"))
	{
		tipoMembresia = "Clasica";
	}
	else if ((membresia == "B") || (membresia == "b"))
	{
		tipoMembresia = "Premium";
	}
	else if ((membresia == "C") || (membresia == "c"))
	{
		tipoMembresia = "Mixta";
	}
	else
	{
		cout << "La opcion es invalida" << endl;
	}
	return tipoMembresia;
}
void Cliente::registrarLibros() const {
	int cantidadL, año, num = 1, IDlibro;
	string nombre, autor;
	Libro libros[5];
	cout << "Ingrese la cantidad de libros (maximo 5): " << endl;
	cin >> cantidadL;
	if (cantidadL > 5)
		cerr << "Cantidad incorrecta." << endl;
	for (int i = 0; i < cantidadL; i++)
	{
		cin.ignore();
		cout << "Libro " << i + 1 << endl;
		cout << "Escriba el nombre del libro: " << endl;
		getline(cin, nombre);
		libros[i].establecerNombreLibro(nombre);
		cout << "Escriba el nombre del autor: " << endl;
		getline(cin, autor);
		libros[i].establecerNombreAutor(autor);
		cout << "Escriba el año de edicion: " << endl;
		cin >> año;
		libros[i].establecerAñoEdicion(año);
		cout << "Escriba el ID del libro" << endl;
		cin >> IDlibro;
		libros[i].establecerIDlibro(IDlibro);
	}
	cout << endl << "-			Lita de libros				-" << endl;
	for (int j = 0; j < cantidadL; j++)
	{
		crearListaLibros(libros[j], num);
		num++;
	}
}
//se ejecuta desde otro metodo
void Cliente::crearListaLibros(Libro libro, int num)const {
	cout << "-								-" << endl;
	cout << "		Libro " << num << "		ID del libro: " << libro.obtenerIDlibro() << endl;
	cout << "		" << libro.obtenerNombreLibro() << ", " << libro.obtenerAñoEdicion() << " - " << libro.obtenerNombreAutor() << endl;
	cout << "-								-" << endl;
}

