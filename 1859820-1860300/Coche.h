#ifndef COCHE_H_
#define COCHE_H_

#include <iostream>
#include "Vehiculo.h"

using namespace std;

class Coche : public Vehiculo{
	private:
		int CantidadPuertas;

	public:
		Coche();
};
#endif
