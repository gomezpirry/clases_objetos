
#ifndef MOTO_H_
#define MOTO_H_

#include "Vehiculo.h"

class Moto : public Vehiculo {
	private : 
		int Pecio ;
	
	public :
		Moto() ;
		~Moto() ;
		void CrearMoto (Moto* MotoACrear) ;	
		float PrecioDeVenta() ;
};
#endif 
