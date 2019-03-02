#ifndef CUENTA_H
#define CUENTA_H

#include <string>

using namespace std;

class Cuenta {
public:
	Cuenta(string password, int numero, float saldo);
	Cuenta();
	~Cuenta();
	void consignacion(float valor);
	bool retiro(float valor);
	float consultarSaldo();
	void cambiarPassword(string password);
	bool ingresar(string password, int numero);
	
private:
	int numero;
	string password;
	float saldo;
};

#endif

