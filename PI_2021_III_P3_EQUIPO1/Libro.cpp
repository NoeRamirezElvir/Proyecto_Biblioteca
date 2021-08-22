#include <iostream>
#include <string>
#include "Libro.h"

using namespace std;
Libro::Libro() {
	establecerAñoEdicion(0);
	establecerIDlibro(0);
	establecerNumeroVolumen(0);
	establecerPrecio(0.00);
	establecerCategoria("     ");
	establecerNombreLibro("     ");
	establecerNombreAutor("     ");
	establecerEditorial("     ");
}
Libro::Libro(int _IDlibro, int _año, int _numeroVolumen, double _precio, string _nombreLibro, string _nombreAutor, string _editorial, string _categoria) {
	establecerAñoEdicion(_año);
	establecerIDlibro(_IDlibro);
	establecerNumeroVolumen(_numeroVolumen);
	establecerPrecio(_precio);
	establecerCategoria(_categoria);
	establecerNombreLibro(_nombreLibro);
	establecerNombreAutor(_nombreAutor);
	establecerEditorial(_editorial);
}
void Libro::establecerAñoEdicion(int _año) {
	if (_año < 0)
		cerr << "Año de edicion invalido." << endl;
	añoEdicion = _año;
}
int Libro::obtenerAñoEdicion()const {
	return añoEdicion;
}
void Libro::establecerIDlibro(int _IDlibro) {
	if (_IDlibro < 0)
		cerr << "Año de edicion invalido." << endl;
	IDlibro = _IDlibro;
}
int Libro::obtenerIDlibro()const {
	return IDlibro;
}
void Libro::establecerNumeroVolumen(int _numeroVolumen) {
	if (_numeroVolumen < 0)
		cerr << "Año de edicion invalido." << endl;
	numeroVolumenes = _numeroVolumen;
}
int Libro::obtenerNumeroVolumen()const {
	return numeroVolumenes;
}
void Libro::establecerPrecio(double _precio) {
	if (_precio < 0)
		cerr << "El precio del libro es incorrecto." << endl;
	precio = _precio;
}
double Libro::obtenerPrecio()const {
	return precio;
}
void Libro::establecerNombreLibro(string _nombreLibro) {
	int longitud = (int)_nombreLibro.size();
	if (longitud < 3)
		cerr << "El nombre del libro es invalido." << endl;
	longitud = (longitud < 30 ? longitud : 29);
	_nombreLibro.copy(nombreLibro, longitud);
	nombreLibro[longitud] = '\0';
}
string Libro::obtenerNombreLibro()const {
	return nombreLibro;
}
void Libro::establecerNombreAutor(string _nombreAutor) {
	int longitud = (int)_nombreAutor.size();
	if (longitud < 3)
		cerr << "Nombre de autor invalido." << endl;
	longitud = (longitud < 20 ? longitud : 19);
	_nombreAutor.copy(nombreAutor, longitud);
	nombreAutor[longitud] = '\0';
}
string Libro::obtenerNombreAutor()const {
	return nombreAutor;
}
void Libro::establecerCategoria(string _categoria) {
	int longitud = (int)_categoria.size();
	if (longitud < 4)
		cerr << "La categoria es incorrecta." << endl;
	longitud = (longitud < 20 ? longitud : 19);
	_categoria.copy(categoria, longitud);
	categoria[longitud] = '\0';
}
string Libro::obtenerCategoria()const {
	return categoria;
}
void Libro::establecerEditorial(string _editorial) {
	int longitud = (int)_editorial.size();
	if (longitud < 5)
		cerr << "La editorial es incorrecta." << endl;
	longitud = (longitud < 20 ? longitud : 19);
	_editorial.copy(editorial, longitud);
	editorial[longitud] = '\0';
}
string Libro::obtenerEditorial()const {
	return editorial;
}
string Libro::asignarCategoria()const {
	string categoria;
	cout << "   - Autobiografia             - Humor" << endl;
	cout << "   - Autoayuda                 - Romance" << endl;
	cout << "   - Ciencia                   - Salud" << endl;
	cout << "   - CienciaFiccion            - Sociedad" << endl;
	cout << "   - Comic                     - Suspenso" << endl;
	cout << "   - Deporte                   - Terror" << endl;
	cout << "   - Historia" << endl;
	cout << "Ingrese la categoria: " << endl;
	getline(cin, categoria);
	return categoria;
}
void Libro::registrarLibro() {
	string nombreL, nombreA, editorial, categoria;
	int año, volumen, IDlibro;
	double precio;


	cout << "Ingrese el ID del libro: " << endl;
	cin >> IDlibro;
	establecerIDlibro(IDlibro);
	//
	cin.ignore();
	cout << "Ingrese el nombre del libro: " << endl;
	getline(cin, nombreL);
	establecerNombreLibro(nombreL);
	//
	cout << "Ingrese el autor del libro: " << endl;
	getline(cin, nombreA);
	establecerNombreAutor(nombreA);
	//
	cout << "Ingrese el año de edicion: " << endl;
	cin >> año;
	establecerAñoEdicion(año);
	//
	cout << "Ingrese la editorial: " << endl;
	getline(cin, editorial);
	establecerEditorial(editorial);
	//
	cout << "Ingrese la categoria del libro: " << endl;
	categoria = asignarCategoria();
	establecerCategoria(categoria);
	//
	cout << "Ingrese el numero de volumen: " << endl;
	cin >> volumen;
	establecerNumeroVolumen(volumen);
	//
	cout << "Escriba el precio del libro: " << endl;
	cin >> precio;
	establecerPrecio(precio);

}
void Libro::imprimirLibro()const {
	cout << "ID del libro: " << obtenerIDlibro() << endl;
	cout << "Nombre del libro: " << obtenerNombreLibro() << endl;
	cout << " Nombre del autor: " << obtenerNombreAutor() << endl;
	cout << "Categoria: " << obtenerCategoria() << endl;
	cout<< " Editorial: " << obtenerEditorial() << endl;
	cout << "Año de edicion: " << obtenerAñoEdicion() << endl; 
	cout<< " Volumen: " << obtenerNumeroVolumen() << endl;
	cout << " Precio del libro: " << obtenerPrecio() << endl;
}
