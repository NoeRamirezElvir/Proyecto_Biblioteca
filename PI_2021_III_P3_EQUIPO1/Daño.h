#ifndef DAÑO_H
#define DAÑO_H

#include <string> 

class Daño
{
public:
	Daño();
	Daño(int, std::string, double);
	//ID
	void establecerDañoID(int);
	int obtenerDañoID() const;
	//tipo de daño
	void establecerTipoDaño(std::string);
	std::string obtenerTipoDaño() const; 
	//costo de extravio
	void establecerCostoExtravio(double);
	double obtenerCostoExtravio() const;
	//costo de daño
	void establecerCostoDaño(double);
	double obtenerCostoDaño() const;

	void registrarDaño();
	void imprimir();
	std::string definirTipoDaño() const; 
	double calcularDaño(); 
	double calcularExtravio(); 

private:
	int dañoID;
	double costoExtravio;
	double costoDaño;
	char tipoDaño[30];
};


#endif // !DAÑO_H

