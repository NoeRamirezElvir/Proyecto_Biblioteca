#include "Estante.h"
#include <iostream>
#include <string>

using namespace std;

Estante::Estante() {
	establecerIDEstante(0);
	establecerLetraI("");
	establecerLetraF("");
	establecerNiveles("");
}
Estante::Estante(int id, string VletraI, string VletraF,string niveles) {
	establecerIDEstante(id);
	establecerLetraI(VletraI);
	establecerLetraF(VletraF);
	establecerNiveles(niveles);
}

void Estante::establecerIDEstante(int vId) {
	id = vId;
}

int Estante::obtenerIDEstante()const {
	return id;
}

void Estante::establecerLetraI(std::string vLetraI) {
	int longitud = (int)vLetraI.size();
	longitud =1;
	vLetraI.copy(LetraI, longitud);
	LetraI[longitud] = '\0';
}
std::string Estante::obtenerLetraI()const {
	return LetraI;
}
void Estante::establecerLetraF(std::string vLetraF) {
	int longitud = (int)vLetraF.size();
	longitud = 1;
	vLetraF.copy(LetraF, longitud);
	LetraF[longitud] = '\0';
}
std::string Estante::obtenerLetraF()const {
	return LetraF;
}
void Estante::establecerNiveles(std::string nivel) {
	int longitud = (int)nivel.size();
	longitud = 2;
	nivel.copy(niveles, longitud);
	niveles[longitud] = '\0';
}
std::string Estante::obtenerNiveles()const {
	return niveles;
}

void Estante::imprimir()const {
	cout << "Id Estante: " << obtenerIDEstante() << "\n"
		<< "Letra Inicial: " << obtenerLetraI() << "\n"
		<< "Letra Final: " << obtenerLetraF();
}
