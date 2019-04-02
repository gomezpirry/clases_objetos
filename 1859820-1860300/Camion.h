#ifndef CAMION_H_
#define CAMION_H_

#include <iostream>
#include "Vehiculo.h"

using namespace std;

class Camion : public Vehiculo{
	private:
		int CapacidadDeCarga;
	
	public:
		Camion();
		//SET
		void setCapacidadDeCarga(int CapacidadDeCarga);
		
		//GET
		int getCapacidadDeCarga();
};
#endif
