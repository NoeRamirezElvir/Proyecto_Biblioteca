#include "SalaComputo.h"
#include <iostream>
#include <string>
#include "Empleado.h"

using namespace std;

SalaComputo::SalaComputo() {
	establecerId(0);
	establecerHorario("");
	establecerDisponibilidad("");
	establecerCapacidad(0);
	establecerEncargado("");
}
SalaComputo::SalaComputo (int _id,string _horario, string _disponibilidad, int _capacidad, string _encargado) {
	establecerId(_id);
	establecerHorario(_horario);
	establecerDisponibilidad(_disponibilidad);
	establecerCapacidad(_capacidad);
	establecerEncargado(_encargado);
}
void SalaComputo::establecerId(int _id) {
	if (_id < 0)
		cerr << "ID invalido";
	ID = _id;
}
int SalaComputo::obtenerId()const {
	return ID;
}
void SalaComputo::establecerCapacidad(int _capacidad) {
	if (_capacidad < 0)
		cerr << "Capacidad invalida";
	capacidad = _capacidad;
}
int SalaComputo::obtenerCapacidad()const {
	return capacidad;
}
void SalaComputo::establecerDisponibilidad(string _disponibilidad) {
	int longitud = (int)_disponibilidad.size();
	if (longitud < 4)
		cerr << "Disponibilidad incorrecta" << endl;
	longitud = (longitud < 15 ? longitud : 14);
	_disponibilidad.copy(disponibilidad, longitud);
	disponibilidad[longitud] = '\0';
}
string SalaComputo::obtenerDisponibilidad()const {
	return disponibilidad;
}
void SalaComputo::establecerEncargado(string _encargado) {
	int longitud = (int)_encargado.size();
	if (longitud < 4)
		cerr << "Nobre de encargado invalido" << endl;
	longitud = (longitud < 15 ? longitud : 14);
	_encargado.copy(encargado, longitud);
	encargado[longitud] = '\0';
}
string SalaComputo::obtenerEncargado()const {
	return encargado;
}
void SalaComputo::establecerHorario(string _tipo) {
	int longitud = (int)_tipo.size();
	if (longitud < 4)
		cerr << "tipo de sala incorrecta" << endl;
	longitud = (longitud < 10 ? longitud : 9);
	_tipo.copy(horario, longitud);
	horario[longitud] = '\0';
}
string SalaComputo::obtenerHorario()const {
	return horario;
}
string SalaComputo::asignarEncargado(Empleado empleado)const {
	string nombreEncargado;
	nombreEncargado = empleado.obtenerPrimerNombre();
	return nombreEncargado;
}
void SalaComputo::imprimir()const {
	cout << "ID de la sala: " << obtenerId()  << "Disponibilidad: " << obtenerDisponibilidad() << endl;
	cout << "Capacidad: " << obtenerCapacidad() << "Encargado: " << obtenerEncargado();
}
