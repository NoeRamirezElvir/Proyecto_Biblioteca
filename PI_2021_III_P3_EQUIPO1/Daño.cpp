#include <iostream>
#include <string>
#include "Daño.h"

using namespace std;
Daño::Daño() {

}
Daño::Daño(int daño_id, string tipo_daño, double costo_daño) {
	establecerDañoID(daño_id), establecerTipoDaño(tipo_daño),
		establecerCostoDaño(costo_daño);
}
void Daño::establecerDañoID(int daño_id) { 
	if (daño_id > 0)
		dañoID = daño_id; 
	else
		throw invalid_argument("ID incorrecto");
}
int Daño::obtenerDañoID() const {
	return dañoID;
}
void Daño::establecerTipoDaño(std::string tipo_daño) {
	int longitud = (int)tipo_daño.size();
	if (longitud < 4)
		cerr << "Tipo de daño incorrecto" << endl;
	longitud = (longitud < 30 ? longitud : 29);
	tipo_daño.copy(tipoDaño, longitud);
	tipoDaño[longitud] = '\0';  
}
std::string Daño::obtenerTipoDaño() const {
	return tipoDaño;
}
std::string Daño::definirTipoDaño() const {
	string tipodaño;
	char daño; 
	int stop = 1;  
	do
	{
		cout << "a- Paginas rayadas" << endl
			<< "b- Deterioro de la estructura" << endl
			<< "c- Extravio" << endl
			<< "d- Otro" << endl;
		cin >> daño;
		switch (daño)
		{
		case 'A':
		case 'a':
			tipodaño = "Paginas rayadas";
			stop = 0;
			break;
		case 'B':
		case 'b':
			tipodaño = "Deterioro de la estructura";
			stop = 0;
			break;
		case 'C':
		case 'c':
			tipodaño = "Extravio";
			stop = 0;
			break;
		case 'D':
		case 'd':
			tipodaño = "Otro";
			stop = 0;
			break;
		default:
			cout << "Opcion invalida" << endl;
			stop = 1;
			break;
		}
	} while (stop == 1);
	return tipodaño; 
}
void Daño::establecerCostoExtravio(double costo_extravio) {
	if (costo_extravio >= 0)
		costoExtravio = costo_extravio;
	else
		throw invalid_argument("Costo debe ser >= 0");
}
double Daño::obtenerCostoExtravio() const {
	return costoExtravio;
}
void Daño::establecerCostoDaño(double costo_daño) {
	if (costo_daño >= 0)
		costoDaño = costo_daño;
	else
		throw invalid_argument("Costo debe ser >= 0");
}
double Daño::obtenerCostoDaño() const {
	return costoDaño;
}
void Daño::registrarDaño() {
	int id;
	string tipo, Tipo;
	cout << "Favor ingrese los siguientes datos" << endl;
	cout << "No ID: "; cin >> id;
	establecerDañoID(id);
	cout << "Tipo de Daño: "; cin >> tipo;
	Tipo = definirTipoDaño();
	establecerTipoDaño(Tipo);  
}
void Daño::imprimir() {
	cout << "No ID: " << obtenerDañoID() << endl
		<< "Tipo de Daño: " << obtenerTipoDaño() << endl
		<< "Costo por Daño: " << calcularDaño() << endl; 
}
double Daño::calcularDaño() {
	if (obtenerTipoDaño() == "Extravio") {
		costoDaño = 400.0;
		return costoDaño;
	}
	else if (obtenerTipoDaño() == "Paginas rayadas")
	{
		costoDaño = 200.0;
		return costoDaño;
	}
	else if (obtenerTipoDaño() == "Ninguno")

	{
		costoDaño = 0.00;
		return costoDaño;
	}
	else {
		costoDaño = 300.0;
		return costoDaño; 
	}
}
double Daño::calcularExtravio() {
	costoExtravio = 400;
	return costoExtravio;  
}
