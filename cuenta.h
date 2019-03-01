/*
 * cuenta.h
 *
 *  Created on: 22/02/2019
 *      Author: Usuario
 */

#ifndef CUENTA_H_
#define CUENTA_H_
#include <windows.h>
#include <string>

using namespace std;

class cuenta {
public:
	int numero;
	string contrasena;
	float saldo;

public:
	cuenta();
	cuenta(int numero, string contrasena, float saldo = 0);
	~cuenta();
	
	int getnumero();
	string getcontrasena();
	bool retiro(float valor);
	void consignacion(float valor);
	float consultar();
	bool ingresar(int numero, string contrasena);
	void cambiarcontrasena(string nueva);

};

#endif /* CUENTA_H_ */
