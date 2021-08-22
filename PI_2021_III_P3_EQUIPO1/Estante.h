#ifndef ESTANTE_H
#define ESTANTE_H
#include <string>
class Estante
{
public:
	Estante();

	Estante(int, std::string, std::string, std::string);

	void establecerIDEstante(int);
	int obtenerIDEstante()const;

	void establecerLetraI(std::string);
	std::string obtenerLetraI()const;

	void establecerLetraF(std::string);
	std::string obtenerLetraF()const;

	void establecerNiveles(std::string);
	std::string obtenerNiveles()const;

	void imprimir()const;
private:
	int id;
	char LetraI[2];
	char LetraF[2];
	char niveles[2];
};


#endif // !ESTANTE_H


