#ifndef CARROS_H_
#define CARROS_H_
#include "Vehiculo.h"


class Carros: public Vehiculo{
private:
	
	int NumPuertas;

public:
	Carros();
	Carros(int chasis, int modelo,int cilindraje, float precio, Marca marca, int NumPuertas);
	
	Carros(const Carros &veh);
	
	~Carros();
	
	float valor();
	
	
};

#endif /* CARROS_H_ */

