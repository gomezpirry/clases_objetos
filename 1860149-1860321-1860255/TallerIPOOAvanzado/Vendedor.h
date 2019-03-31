#ifndef VENDEDOR_H
#define VENDEDOR_H

#include "Persona.h"

class Vendedor : public Persona {
public:
	Vendedor();
	~Vendedor();
	void setVehiculosVendidos(int vehiculosVendidos);
	int getVehiculosVendidos();
	void setMontoVenta(int montoVenta);
	int getMontoVenta();
  
private:
	int vehiculosVendidos;
	int montoVenta;
};

#endif

