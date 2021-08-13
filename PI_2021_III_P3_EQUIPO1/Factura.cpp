#include <iostream>
#include <string>
#include "Factura.h"
#include "Cliente.h"
using namespace std;

Factura::Factura() {

}
Factura::Factura(int factura_id, int cliente_id, string cliente, string membresia, string empleado_n,
	 string prestamo, string tipo) {
	establecerFacturaID(factura_id), establecerPrimerNombre(cliente), 
		establecerIDcliente(cliente_id), establecerMembresia(membresia),
		establecerEmpleadoNombre(empleado_n), 
		establecerPrestamo(prestamo), establecer_TipoDaño(tipo);
}
void Factura::establecerFacturaID(int factura_id) {
	if (factura_id > 0)
		facturaID = factura_id;
	else
		throw invalid_argument("ID incorrecto");
}
int Factura::obtenerFacturaID() const {
	return facturaID;
}


void Factura::establecerEmpleadoNombre(string empleado_n) {
	int longitud = (int)empleado_n.size();
	longitud = (longitud < 10 ? longitud : 9);
	if (longitud < 3)
		cerr << "Nombre invalido" << endl;
	empleado_n.copy(empleadoNombre, longitud);
	empleadoNombre[longitud] = '\0';
}
string Factura::obtenerEmpleadoNombre() const {
	return empleadoNombre; 
}
void Factura::establecerEmpleadoApellido(string empleado_a) {
	int longitud = (int)empleado_a.size();
	if (longitud < 3)
		cerr << "Apellido invalido";
	longitud = (longitud < 10 ? longitud : 9);
	empleado_a.copy(empleadoApellido, longitud);
	empleadoApellido[longitud] = '\0';
}
string Factura::obtenerEmpleadoApellido()const {
	return empleadoApellido;
}
void Factura::establecerDias(int dias) {
	if (dias > 0 && dias < 32)
		Dias = dias;
	else
		throw invalid_argument("Dias de fecha deben ser > 0 y < 31");
}
int Factura::obtenerDias() const {
	return Dias;
}
void Factura::establecerMes(string mes) {
	int longitud = (int)mes.size();
	if (longitud < 4)
		cerr << "Mes invalido";
	longitud = (longitud < 12 ? longitud : 11);
	mes.copy(Mes, longitud);
	Mes[longitud] = '\0';
}
string Factura::obtenerMes() const {
	return Mes;
}
void Factura::establecerAño(int year) {
	if (year > 0)
		Año = year;
	else
		throw invalid_argument("Año invalido");
}
int Factura::obtenerAño()const {
	return Año;
}
void Factura::establecerDaño(string tipo) {
	int longitud = (int)tipo.size();
	if (longitud < 4) 
		cerr << "Tipo de daño invalido" << endl;
	longitud = (longitud < 30 ? longitud : 29);
	tipo.copy(damage, longitud);
	damage[longitud] = '\0';
}
string Factura::obtenerDaño() const {
	return damage;
}
void Factura::establecerPrestamo(string prestamo) {
	int longitud = (int)prestamo.size();
	if (longitud < 6)
		cerr << "Tipo de prestamo invalido" << endl;
	longitud = (longitud < 30 ? longitud : 29);
	prestamo.copy(prestamo_, longitud);
	prestamo_[longitud] = '\0';
}
string Factura::obtenerPrestamo() const {
	return prestamo_;
}
void Factura::establecerHora(string hora) {
	int longitud = (int)hora.size();
	if (longitud < 6)
		cerr << "Tipo de prestamo invalido" << endl;
	longitud = (longitud < 8 ? longitud : 7);
	hora.copy(Hora, longitud);
	Hora[longitud] = '\0';
}
string Factura::obtenerHora() const {
	return Hora;
}

void Factura::registrar() {
	int factura_id, cliente_id, dias, year;
	string cliente, clienteA, membresia, empleado_n, empleado_a, mes, prestamo;
	cout << "Favor ingrese los siguientes datos" << endl
		<< "No Factura "; cin >> factura_id;
	establecerFacturaID(factura_id);
	cout << "Id de Cliente "; cin >> cliente_id;
	establecerIDcliente(cliente_id);
	cout << "Nombre de Cliente "; cin >> cliente;
	establecerPrimerNombre(cliente);
	cout << "Apellido de Cliente "; cin >> clienteA;
	establecerApellidoPaterno(clienteA);
	cout << "Tipo de Membresia "; cin >> membresia;
	establecerMembresia(membresia);
	cout << "Nombre de empleado "; cin >> empleado_n;
	establecerEmpleadoNombre(empleado_n);
	cout << "Apellido de empleado "; cin >> empleado_a;
	establecerEmpleadoApellido(empleado_a);
	cout << "'Dia "; cin >> dias;
	establecerDias(dias);
	cout << "Mes "; cin >> mes;
	establecerMes(mes);
	cout << "Año "; cin >> year;
	establecerAño(year);
	cout << "Tipo de prestamo "; cin >> prestamo;
	establecerPrestamo(prestamo);
}

void Factura::calcularTotal(double costodia, double costodaño, int dia_alquiler) {
	totalPagar = ((costodia * dia_alquiler) + costodaño);
}

double Factura::obtenerTotal() const {
	return totalPagar;
}
void Factura::imprimir() {
	cout << "Factura No " << obtenerFacturaID() << endl
		<< "Cliente " << obtenerPrimerNombre() << " " << obtenerApellidoPaterno() << endl
		<< "Total a Pagar es: $" << obtenerTotal() << endl; 
}