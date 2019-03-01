#include <string>

#ifndef CUENTA_H_
#define CUENTA_H_

using namespace std;


class Cuenta {

public:

	int numero;
	string clave;
	float saldo;

	public:
	Cuenta();
	Cuenta(int numero, string clave, float saldo);
	~Cuenta();
	
	int getnumero();
	string getclave();
	float getsaldo();

	bool retiro (float valor);
	void consignacion(float valor);
	float consultar();
	bool ingresar(int numero, string clave);
	void cambiarClave(string nueva);


};

#endif /* CUENTA_H_ */

