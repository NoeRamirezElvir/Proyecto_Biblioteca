#include "Computadora.h"
#include <iostream>

using namespace std;

Computadora::Computadora() {
	establecerIDcomputadora(0);
	establecerMarca("");
	establecerModelo("");
	establecerHdd("");
	establecerRam("");
	establecerTipo("");
	establecerOS("");
	establecerObservacion("");
}

Computadora::Computadora(int vId,string vMarca,string vModelo,string vHdd,string vRam, string vTipo,string vOs,string vObser) {
	establecerIDcomputadora(vId);
	establecerMarca(vMarca);
	establecerModelo(vModelo);
	establecerHdd(vHdd);
	establecerRam(vRam);
	establecerTipo(vTipo);
	establecerOS(vOs);
	establecerObservacion(vObser);
}

void Computadora::establecerIDcomputadora(int vId) {
	IDcomputadora = vId;
}

int Computadora::obtenerIDcomputadora()const {
	return IDcomputadora;
}

void Computadora::establecerMarca(string vMarca) {
	int longitud = (int)vMarca.size();
	if (longitud < 7)
		cerr << " invalido" << endl;
	longitud = (longitud < 10 ? longitud : 9);
	vMarca.copy(Marca, longitud);
	Marca[longitud] = '\0';
}
string Computadora::obtenerMarca()const {
	return Marca;
}

void Computadora::establecerModelo(string vModel) {
	int longitud = (int)vModel.size();
	if (longitud < 7)
		cerr << " invalido" << endl;
	longitud = (longitud < 20 ? longitud : 19);
	vModel.copy(Modelo, longitud);
	Modelo[longitud] = '\0';
}
string Computadora::obtenerModelo()const {
	return Modelo;
}

void Computadora::establecerHdd(string vHdd) {
	int longitud = (int)vHdd.size();
	if (longitud < 7)
		cerr << " invalido" << endl;
	longitud = (longitud < 10 ? longitud : 9);
	vHdd.copy(HDD, longitud);
	HDD[longitud] = '\0';
}
string Computadora::obtenerHdd()const {
	return HDD;
}

void Computadora::establecerRam(string vRam) {
	int longitud = (int)vRam.size();
	if (longitud < 2)
		cerr << " invalido" << endl;
	longitud = (longitud < 8 ? longitud : 7);
	vRam.copy(ram, longitud);
	ram[longitud] = '\0';
}
string Computadora::obtenerRam()const {
	return ram;
}
void Computadora::establecerTipo(string vTipo) {
	int longitud = (int)vTipo.size();
	if (longitud < 7)
		cerr << " invalido" << endl;
	longitud = (longitud < 10 ? longitud : 9);
	vTipo.copy(tipo, longitud);
	tipo[longitud] = '\0';
}
string Computadora::obtenerTipo()const {
	return tipo;
}
void Computadora::establecerOS(string vOs) {
	int longitud = (int)vOs.size();
	if (longitud < 5)
		cerr << " invalido" << endl;
	longitud = (longitud < 30 ? longitud : 29);
	vOs.copy(OS, longitud);
	OS[longitud] = '\0';
}
string Computadora::obtenerOS()const {
	return OS;
}

void Computadora::establecerObservacion(string vOb) {
	int longitud = (int)vOb.size();
	if (longitud < 5)
		cerr << " invalido" << endl;
	longitud = (longitud < 50 ? longitud : 49);
	vOb.copy(observacion, longitud);
	observacion[longitud] = '\0';
}
string Computadora::obtenerObservacion()const {
	return observacion;
}

void Computadora::imprimir() const{
	cout << "Computadota : " << obtenerIDcomputadora() << endl
		<< "Marca: " << obtenerMarca() << " Modelo: " << obtenerModelo() << endl;
}