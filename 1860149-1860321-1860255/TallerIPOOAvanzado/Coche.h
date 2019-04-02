#ifndef COCHE_H
#define COCHE_H
#include "Vehiculo.h"

class Coche : public Vehiculo {
public:
	Coche();
	~Coche();
	void setCantPuertas(int cantPuertas);
	int getCantPuertas();
	void calcularPrecioVenta();
private:
	int cantPuertas;
};

#endif

