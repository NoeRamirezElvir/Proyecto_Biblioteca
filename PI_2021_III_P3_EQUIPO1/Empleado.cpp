#include <iostream>
#include <string>
#include <stdlib.h>
#include <stdexcept>
#include "Empleado.h"

using namespace std;
Empleado::Empleado() {

}
Empleado::Empleado(int personaID, string nombre, string apellido, int ID, string fecha, double sueldo,
	double horas, double ventas, double precio_hora, string departamento, string sucursal) {
	establecerID(personaID), establecerPrimerNombre(nombre), establecerApellidoPaterno(apellido),
		establecerEmpleadoID(ID), establecerFechaIngreso(fecha), establecerSueldo(sueldo),
		establecerHorasExtras(horas), establecerCantVentas(ventas), establecerPrecioHorasE(precio_hora),
		establecerDepartamento(departamento), establecerSucursal(sucursal);
}
void Empleado::establecerFechaIngreso(std::string fecha) {
	int longitud = (int)fecha.size();
	longitud = (longitud < 30 ? longitud : 29);
	fecha.copy(fechaIngreso, longitud);
	fechaIngreso[longitud] = '\0';
}
string Empleado::obtenerFechaIngreso() const {
	return fechaIngreso;
}
void Empleado::establecerSueldo(double sueldo) {
	if (sueldo >= 0)
		Sueldo = sueldo;
	else
		throw invalid_argument("El sueldo debe ser >= 0");
}
double Empleado::obtenerSueldo() const {
	return Sueldo;
}
void Empleado::establecerHorasExtras(double hrs_extras) {
	if (hrs_extras >= 0)
		horasExtras = hrs_extras;
	else
		throw invalid_argument("Las horas extras deben ser >=0");
}
double Empleado::obtenerHorasExtras() const {
	return horasExtras;
}
void Empleado::establecerPrecioHorasE(double precio_hrs) {
	if (precio_hrs >= 0)
		precioHrsE = precio_hrs;
	else
		throw invalid_argument("El precio de horas extras debe ser >= 0");
}
double Empleado::obtenerPrecioHorasE() const {
	return precioHrsE;
}
void Empleado::establecerCantVentas(double ventas) {
	if (ventas >= 0)
		cantVentas = ventas;
	else
		throw invalid_argument("La cantidad de ventas debe ser >= 0");
}
double Empleado::obtenerCantVentas() const {
	return cantVentas;
}
void Empleado::establecerDepartamento(std::string departamento) {
	int longitud = (int)departamento.size();
	longitud = (longitud < 20 ? longitud : 19);
	departamento.copy(Departamento, longitud);
	Departamento[longitud] = '\0';
}
string Empleado::obtenerDepartamento() const {
	return Departamento;
}
void Empleado::establecerSucursal(string sucursal) {
	int longitud = (int)sucursal.size();
	if (longitud < 1)
		cerr << " incorrecta" << endl;
	longitud = (longitud < 50 ? longitud : 49);
	sucursal.copy(Sucursal, longitud);
	Sucursal[longitud] = '\0';
}
string Empleado::obtenerSucursal() const {
	return Sucursal;
}
void Empleado::establecerEmpleadoID(int empleado_id) {
	if (empleado_id > 0)
		EmpleadoID = empleado_id;
	else
		throw invalid_argument("ID incorrecto");
}
int Empleado::obtenerEmpleadoID() const {
	return EmpleadoID;
}

double Empleado::calcularIngresos() {
	return (obtenerSueldo() + (obtenerHorasExtras() * obtenerPrecioHorasE()));
}

void Empleado::imprimir() const {
	cout << "ID de empleado: " << obtenerEmpleadoID() << endl
		<< "Nombre: " << obtenerPrimerNombre() << " " << obtenerApellidoPaterno() << endl
		<< "Fecha de ingreso: " << obtenerFechaIngreso() << endl
		<< "Sueldo: " << obtenerSueldo() << endl
		<< "Horas extras: " << obtenerHorasExtras() << endl
		<< "Cantidad de ventas: " << obtenerCantVentas() << endl
		<< "Precio por hora: " << obtenerPrecioHorasE() << endl
		<< "Departamento: " << obtenerDepartamento() << endl;
}

void Empleado::registrarEmpleado() {
	int ID = 0;
	string ingreso, _departamento;
	double _sueldo, horas_extras, cant_ventas, precioxhora;

	cout << "Favor ingrese los siguientes datos" << endl;

	cout << "Fecha de ingreso: ";
	getline(cin, ingreso);
	establecerFechaIngreso(ingreso);

	cout << "Sueldo: ";
	cin >> _sueldo;
	establecerSueldo(_sueldo);

	cout << "Horas extras: ";
	cin >> horas_extras;
	establecerHorasExtras(horas_extras);

	cout << "Cantidad de ventas: ";
	cin >> cant_ventas;
	establecerCantVentas(cant_ventas);

	cout << "Precio por hora: ";
	cin >> precioxhora;
	establecerPrecioHorasE(precioxhora);

	cout << "Departamento: ";
	getline(cin, _departamento);
	establecerDepartamento(_departamento);

	establecerTipoPersona("Empleado");
}

