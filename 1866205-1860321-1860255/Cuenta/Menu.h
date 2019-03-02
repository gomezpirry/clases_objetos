#ifndef MENU_H
#define MENU_H

#include <iostream>
#include "Cuenta.h"

using namespace std;

class Menu {
public:
	Menu(Cuenta cuenta);
	~Menu();
	void mostrarIngresar();
	void principal();
	void consignacion();
	void retiro();
	void consultarSaldo();
	void cambiarPassword();
private:
	int opcion;
	Cuenta cuenta;
};

#endif

