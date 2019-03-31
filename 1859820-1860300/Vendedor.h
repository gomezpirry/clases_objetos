#ifndef VENDEDOR_H_
#define VENDEDOR_H_

#include<iostream>
#include "Persona.h"
using namespace std;

class Vendedor : public Persona {
private:
	int CantidadVehiculosVendidos;

public:
	Vendedor();
	int getCantidadVehiculosVendidos();
	void setCantidadVehiculosVendidos(int cantidadVehiculosVendidos);
};

#endif
