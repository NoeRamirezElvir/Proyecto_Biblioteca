#ifndef USUARIO_H
#define USUARIO_H
#include <string>

class Usuario
{
public:
	Usuario();
	Usuario(std::string, std::string);
	void establecerNombre(std::string);
	std::string obtenerNombre()const;
	void establecerContraseña(std::string);
	std::string obtenerContraseña()const;

	bool darAcceso(std::string, std::string) const;




private:
	char nombre[15];
	char contraseña[15];
};


#endif // !USUARIO_H