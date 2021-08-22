#include "Usuario.h"
#include <iostream>
#include <string>

using namespace std;

Usuario::Usuario() {
	establecerNombre("   ");
	establecerContraseña("   ");
}
Usuario::Usuario(string _nombre, string _contraseña) {
	establecerNombre(_nombre);
	establecerContraseña(_contraseña);
}
void Usuario::establecerNombre(string _nombre) {
	int longitud = (int)_nombre.size();
	if (longitud < 2)
		cerr << "Nombre no valido." << endl;
	longitud = (longitud < 15 ? longitud : 14);
	_nombre.copy(nombre, longitud);
	nombre[longitud] = '\0';
}
string Usuario::obtenerNombre()const {
	return nombre;
}
void Usuario::establecerContraseña(string _contraseña) {
	int longitud = (int)_contraseña.size();
	if (longitud < 2)
		cerr << "Nombre no valido." << endl;
	longitud = (longitud < 15 ? longitud : 14);
	_contraseña.copy(contraseña, longitud);
	contraseña[longitud] = '\0';
}
string Usuario::obtenerContraseña()const {
	return contraseña;
}

bool Usuario::darAcceso(string nom, string con)const {
	string nombre, contraseña;
	bool acceso = true;
	nombre = obtenerNombre();
	contraseña = obtenerContraseña();

	if ((nom == nombre) && (con == contraseña))
	{
		acceso = true;
	}
	else
	{
		acceso = false;
	}
	return acceso;
}
