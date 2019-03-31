#ifndef CAMIONES_H_
#define CAMIONES_H_

#include "Vehiculo.h"

class Camiones : public Vehiculo{
private:
	
	int NumPuertas; 
 	int carga; 
	
public:
	Camiones();
	Camiones(int chasis, int modelo,int cilindraje, float precio, Marca marca,int NumPuertas, int carga);
	
	Camiones(const Camiones &veh);
	
	~Camiones();


	int getCarga();
	int setCarga(int carga);

	float valor();

};

#endif /* CAMIONES_H_ */

