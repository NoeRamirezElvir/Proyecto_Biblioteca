#include "Recibido.h"
#include "Empleado.h"
#include "Proveedor.h"
#include <iostream>
#include <string>

using namespace std;

Recibido::Recibido() {
	establecerCantidadL(0);
	establecerID(0);
	establecerEncargado("   ");
	establecerFecha("   ");
	establecerNombreProveedor("   ");
	establecerHora("  ");
}
Recibido::Recibido(int _id, int _cantidad, string _encargado, string _fecha, string _proveedor,string _hora) {
	establecerCantidadL(_cantidad);
	establecerID(_id);
	establecerEncargado(_encargado);
	establecerFecha(_fecha);
	establecerNombreProveedor(_proveedor);
	establecerHora(_hora);
}
void Recibido::establecerID(int _id) {
	if (_id < 0)
		cerr << "Numero de ID Incorrecto" << endl;
	ID = _id;
}
int Recibido::obtenerID()const {
	return ID;
}
void Recibido::establecerCantidadL(int _cantidad) {
	if (_cantidad < 0)
		cerr << "Cantidad invalida";
	cantidadLibros = _cantidad;
}
int Recibido::obtenerCantidadL()const {
	return cantidadLibros;
}
void Recibido::establecerEncargado(string _encargado) {
	int longitud = (int)_encargado.size();
	if (longitud < 4)
		cerr << "Nombre de encargado incorrecto" << endl;
	longitud = (longitud < 15 ? longitud : 14);
	_encargado.copy(encargado, longitud);
	encargado[longitud] = '\0';
}
string Recibido::obtenerEncargado()const {
	return encargado;
}
void Recibido::establecerNombreProveedor(string _proveedor) {
	int longitud = (int)_proveedor.size();
	if (longitud < 4)
		cerr << "Nombre de proveedor incorrecto" << endl;
	longitud = (longitud < 15 ? longitud : 14);
	_proveedor.copy(nomProveedor, longitud);
	nomProveedor[longitud] = '\0';
}
string Recibido::obtenerNombreProveedor()const {
	return nomProveedor;
}
void Recibido::establecerFecha(string _fecha) {
	int longitud = (int)_fecha.size();
	if (longitud < 4)
		cerr << "Fecha incorrecta" << endl;
	longitud = (longitud < 10 ? longitud : 9);
	_fecha.copy(fecha, longitud);
	fecha[longitud] = '\0';
}
string Recibido::obtenerFecha()const {
	return fecha;
}
void Recibido::establecerHora(string _hora) {
	int longitud = (int)_hora.size();
	if (longitud < 4)
		cerr << "Fecha incorrecta" << endl;
	longitud = (longitud < 6 ? longitud : 5);
	_hora.copy(hora, longitud);
	hora[longitud] = '\0';
}
string Recibido::obtenerHora()const {
	return hora;
}

string Recibido::obtenerNombreEncargado(Empleado empleado)const {
	string nombre;
	nombre = empleado.obtenerPrimerNombre();
	return nombre;
}
string Recibido::asignarProveedor(Proveedor proveedor)const {
	string nombre;
	nombre = proveedor.obtenerNombre();
	return nombre;
}
void Recibido::imprimir()const {
	cout << "Proveedor: " << obtenerNombreProveedor() << "Cantidad de libros: " << obtenerCantidadL() << endl;
	cout << "Encargado: " << obtenerEncargado() << "Fecha: " << obtenerFecha() << endl;
}