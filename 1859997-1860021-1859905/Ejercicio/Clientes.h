#ifndef CLIENTES_H_
#define CLIENTES_H_

#include "Persona.h"

class Clientes : public Persona {
private:
	
	int VehiculosComprados;
	int montoComprado;

public:
	Clientes();
	Clientes(string nombre, string apellido, int cedula,int VehiculosComprados,int montoComprado);
	~Clientes();
	
	
	int getVehiculosComprados();
	void setVehiculosComprados(int VehiculosComprados);
	
	int getMontoComprado();
	void setMontoComprado();
	
	
	
};

#endif /* CLIENTES_H_ */

