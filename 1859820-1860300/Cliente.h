#ifndef CLIENTE_H_
#define CLIENTE_H_

#include <iostream>
#include "Persona.h"

using namespace std;

class cliente : public Persona {
private:
	int CanTvehiculosComprados;
	int MontoCompraCliente;
public:
	cliente();
	int getCanTvehiculosComprados();
	void setCanTvehiculosComprados(int canTvehiculosComprados);
	int getMontoCompraCliente();
	void setMontoCompraCliente(int montoCompraCliente);
};

#endif 
