#ifndef CLIENTE_H
#define CLIENTE_H
#include "Persona.h"

class Cliente : public Persona {
public:
	Cliente();
	~Cliente();
	void addVehiculosComprados(int vehiculosComprados);
	int getVehiculosComprados();
	void addMontoCompra(int montoCompra);
	int getMontoCompra();
	
private:
	int vehiculosComprados;
	int montoCompra;
};

#endif

