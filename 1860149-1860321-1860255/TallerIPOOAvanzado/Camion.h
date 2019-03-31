#ifndef CAMION_H
#define CAMION_H

#include "Vehiculo.h"

class Camion : public Vehiculo {
public:
	Camion();
	~Camion();
	void setCantPuertas(int cantPuertas);
	void setCapacidadCargar(float capacidadCarga);
	int getCantPuertas();
	float getCapacidadCarga();
	void calcularPrecioVenta();
private:
	int cantPuertas;
	float capacidadCarga;
};

#endif

