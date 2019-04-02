
#ifndef CUENTA_H_
#define CUENTA_H_
#include <iostream>
#include <string>

using namespace std ;

class Cuenta {
private :
	int numero ;
	string contrasena ;
	float saldo ;

public :
	Cuenta();
	~Cuenta();
	void Creado () ;
	void Verificar (string numero, string contrasena) ;
	Cuenta (int numero, string contrasena, float saldo ) ;
	void setNumero (int numero_) ;
	void setContrasena (string contrasena_);
	void setSaldo (float saldo) ;
	int getNumero () ;
	string getContrasena () ;
	float getSaldo () ;
	bool retiro (float valor) ;
	void consigacion (float valor) ;
	float consultar () ;
	bool ingresar (string constrasena, int numero ) ;
	void cambiarContrasena (string nueva) ;
};

#endif /* CUENTA_H_ */

