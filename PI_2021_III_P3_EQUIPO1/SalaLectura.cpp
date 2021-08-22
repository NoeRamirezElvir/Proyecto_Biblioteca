#include <iostream>
#include <string>
#include "SalaLectura.h"
#include "Empleado.h"


using namespace std;

SalaLectura::SalaLectura() {
	establecerCapacidad(0);
	establecerDisponibilidad("   ");
	establecerEncargado("   ");
	establecerID(0);
}
SalaLectura::SalaLectura(int _id, int _capacidad, string _encargado, string _disponibilidad) {
	establecerCapacidad(_capacidad);
	establecerDisponibilidad(_disponibilidad);
	establecerEncargado(_encargado);
	establecerID(_id);
}
void SalaLectura::establecerID(int _id) {
	if (_id < 0)
		cerr << "ID invalido";
	ID = _id;
}
int SalaLectura::obtenerID()const {
	return ID;
}
void SalaLectura::establecerCapacidad(int _capacidad) {
	if (_capacidad < 0)
		cerr << "Capacidad invalida";
	capacidad = _capacidad;
}
int SalaLectura::obtenerCapacidad()const {
	return capacidad;
}
void SalaLectura::establecerDisponibilidad(string _disponibilidad) {
	int longitud = (int)_disponibilidad.size();
	if (longitud < 4)
		cerr << "Disponibilidad incorrecta" << endl;
	longitud = (longitud < 15 ? longitud : 14);
	_disponibilidad.copy(disponibilidad, longitud);
	disponibilidad[longitud] = '\0';
}
string SalaLectura::obtenerDisponibilidad()const {
	return disponibilidad;
}
void SalaLectura::establecerEncargado(string _encargado) {
	int longitud = (int)_encargado.size();
	if (longitud < 4)
		cerr << "Nobre de encargado invalido" << endl;
	longitud = (longitud < 15 ? longitud : 14);
	_encargado.copy(encargado, longitud);
	encargado[longitud] = '\0';
}
string SalaLectura::obtenerEncargado()const {
	return encargado;
}
void SalaLectura::establecerTipoSala(string _tipo) {
	int longitud = (int)_tipo.size();
	if (longitud < 4)
		cerr << "tipo de sala incorrecta" << endl;
	longitud = (longitud < 20 ? longitud : 19);
	_tipo.copy(tipoSala, longitud);
	tipoSala[longitud] = '\0';
}
string SalaLectura::obtenerTipoSala()const {
	return tipoSala;
}
string SalaLectura::asignarEncargado(Empleado empleado)const {
	string nombreEncargado;
	nombreEncargado = empleado.obtenerPrimerNombre();
	return nombreEncargado;
}
void SalaLectura::imprimir()const {
	cout << "ID de la sala: " << obtenerID() << "Tipo de sala: " << obtenerTipoSala() << "Disponibilidad: " << obtenerDisponibilidad() << endl;
	cout << "Capacidad: " << obtenerCapacidad() << "Encargado: " << obtenerEncargado();
}