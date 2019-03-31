#ifndef MOTOS_H_
#define MOTOS_H_

#include "Vehiculo.h"

class Motos : public Vehiculo {

public:
	Motos();
	Motos(int chasis, int modelo,int cilindraje, float precio, Marca marca);
	
	Motos(const Motos &veh);
	
	~Motos();
		
	float valor();
	
	
	
};

#endif /* MOTOS_H_ */

