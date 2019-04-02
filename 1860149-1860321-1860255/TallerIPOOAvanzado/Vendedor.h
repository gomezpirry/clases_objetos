#ifndef VENDEDOR_H
#define VENDEDOR_H

#include "Persona.h"

class Vendedor : public Persona {
public:
	Vendedor();
	~Vendedor();
	void addVehiculosVendidos(int vehiculosVendidos);
	int getVehiculosVendidos();
	void addMontoVenta(int montoVenta);
	int getMontoVenta();
  
private:
	int vehiculosVendidos;
	int montoVenta;
};

#endif

