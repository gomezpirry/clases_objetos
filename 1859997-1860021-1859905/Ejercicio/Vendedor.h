#ifndef VENDEDOR_H_
#define VENDEDOR_H_
#include "Persona.h"

class Vendedor : public Persona {
	
private:
	int vehiculosVendidos; 
	int montoVendido; 
	
public:
	Vendedor();
	Vendedor(string nombre, string apellido, int cedula, int vehiculosVendidos, int montoVendido);
	~Vendedor();
	
	
	int getVehiculosVendidos();
	void setVehiculosVendidos();
	
	int getMontoVendido();
	void setMontoVendido();
	
	
};

#endif /* VENDEDOR_H_ */
