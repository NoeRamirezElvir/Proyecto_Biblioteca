#include "Proveedor.h"
#include <string>
#include <iostream>

using namespace std;

Proveedor::Proveedor() {
	establecerID(0);
	establecerTelefono(0);
	establecerCategoria("   ");
	establecerDireccion("   ");
	establecerFecha("   ");
	establecerNombre("   ");
	establecerRtn("   ");
}
Proveedor::Proveedor(int _id, int _telefono, string _nombre, string _rtn, string _fecha, string _direccion, string _ciudad, string _categoria) {
	establecerID(_id);
	establecerTelefono(_telefono);
	establecerCategoria(_categoria);
	establecerDireccion(_direccion);
	establecerCiudad(_ciudad);
	establecerFecha(_fecha);
	establecerNombre(_nombre);
	establecerRtn(_rtn);
}
void Proveedor::establecerID(int _id) {
	if (_id < 0)
		cerr << "Id invalido";
	ID = _id;
}
int Proveedor::obtenerID()const {
	return ID;
}
void Proveedor::establecerTelefono(int _telefono) {
	if (_telefono < 0)
		cerr << "Numero de telefono invalido";
	telefono = _telefono;
}
int Proveedor::obtenerTelefono()const {
	return telefono;
}
void Proveedor::establecerNombre(string _nombre) {
	int longitud = (int)_nombre.size();
	if (longitud < 4)
		cerr << "Nombre invalido" << endl;
	longitud = (longitud < 10 ? longitud : 9);
	_nombre.copy(nombre, longitud);
	nombre[longitud] = '\0';
}
string Proveedor::obtenerNombre()const {
	return nombre;
}
void Proveedor::establecerCategoria(string _categoria) {
	int longitud = (int)_categoria.size();
	if (longitud < 4)
		cerr << "Categoria invalida" << endl;
	longitud = (longitud < 15 ? longitud : 14);
	_categoria.copy(categoria, longitud);
	categoria[longitud] = '\0';
}
string Proveedor::obtenerCategoria()const {
	return categoria;
}
void Proveedor::establecerCiudad(string _ciudad) {
	int longitud = (int)_ciudad.size();
	if (longitud < 4)
		cerr << "Ciudad incorrecta" << endl;
	longitud = (longitud < 15 ? longitud : 14);
	_ciudad.copy(ciudad, longitud);
	ciudad[longitud] = '\0';
}
string Proveedor::obtenerCiudad()const {
	return ciudad;
}
void Proveedor::establecerDireccion(string _direccion) {
	int longitud = (int)_direccion.size();
	if (longitud < 4)
		cerr << "Direccion invalida" << endl;
	longitud = (longitud < 15 ? longitud : 14);
	_direccion.copy(direccion, longitud);
	direccion[longitud] = '\0';
}
string Proveedor::obtenerDireccion()const {
	return direccion;
}
void Proveedor::establecerFecha(string _fecha) {
	int longitud = (int)_fecha.size();
	if (longitud < 4)
		cerr << "Fecha invalida" << endl;
	longitud = (longitud < 10 ? longitud : 9);
	_fecha.copy(fecha, longitud);
	fecha[longitud] = '\0';
}
string Proveedor::obtenerFecha()const {
	return fecha;
}
void Proveedor::establecerRtn(string _rtn) {
	int longitud = (int)_rtn.size();
	if (longitud < 4)
		cerr << "RTN incorrecto" << endl;
	longitud = (longitud < 10 ? longitud : 9);
	_rtn.copy(rtn, longitud);
	rtn[longitud] = '\0';
}
string Proveedor::obtenerRtn()const {
	return rtn;
}

void Proveedor::imprimir()const {
	cout << "Nombre: " << obtenerNombre() << "Direcicon: " << obtenerDireccion() << "Ciudad: " << obtenerCiudad() << endl;
	cout << "RTN: " << obtenerRtn() << "Telefono: " << obtenerTelefono() << "Categoria: " << obtenerCategoria() << endl;
}