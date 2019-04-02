#ifndef MOTO_H_
#define MOTO_H_


#include <iostream>
#include "Vehiculo.h"

using namespace std;

class Moto : public Vehiculo {
	
	public:
		Moto();	
		Moto(int NumeroChasis , string 	Marca , int Modelo , int Cilindraje , float	PrecioBaseVenta);		
	
};

#endif
