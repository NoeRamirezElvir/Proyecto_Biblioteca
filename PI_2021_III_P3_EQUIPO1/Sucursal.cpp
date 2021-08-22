#include "Sucursal.h"
#include <iostream>

using namespace std;

Sucursal::Sucursal() {
	establecerIDSucursal(0);
	establecerCiudad("");
	establecerDireccion("");
	establecercantEmpleados("");
	establecerNombre("");
}
Sucursal::Sucursal(int vid, string vnom, string vciu, string vdir, string vcant) {
	establecerIDSucursal(vid);
	establecerNombre(vnom);
	establecerCiudad(vciu);
	establecerDireccion(vdir);
	establecercantEmpleados(vcant);
}
void Sucursal::establecerIDSucursal(int _capacidad) {
	if (_capacidad < 0)
		cerr << "Capacidad invalida";
	id = _capacidad;
}
int Sucursal::obtenerIDSucursal()const {
	return id;
}
void Sucursal::establecerNombre(string _ciu) {
	int longitud = (int)_ciu.size();
	if (longitud < 1)
		cerr << " incorrecta" << endl;
	longitud = (longitud < 50 ? longitud : 49);
	_ciu.copy(nombre, longitud);
	nombre[longitud] = '\0';
}
string Sucursal::obtenerNombre() const {
	return nombre;
}
void Sucursal::establecerCiudad(string _ciu) {
	int longitud = (int)_ciu.size();
	if (longitud < 3)
		cerr << " incorrecta" << endl;
	longitud = (longitud < 20 ? longitud : 19);
	_ciu.copy(ciudad, longitud);
	ciudad[longitud] = '\0';
}
string Sucursal::obtenerCiudad()const {
	return ciudad;
}
void Sucursal::establecerDireccion(string _ciu) {
	int longitud = (int)_ciu.size();
	if (longitud < 4)
		cerr << " incorrecta" << endl;
	longitud = (longitud < 30 ? longitud : 29);
	_ciu.copy(direccion, longitud);
	direccion[longitud] = '\0';
}
string Sucursal::obtenerDireccion()const {
	return direccion;
}
void Sucursal::establecercantEmpleados(string _ciu) {
	int longitud = (int)_ciu.size();
	if (longitud < 1)
		cerr << " incorrecta" << endl;
	longitud = (longitud < 20 ? longitud : 19);
	_ciu.copy(cantEmpleados, longitud);
	cantEmpleados[longitud] = '\0';
}
string Sucursal::obtenerCantEmpleados()const {
	return cantEmpleados;
}


