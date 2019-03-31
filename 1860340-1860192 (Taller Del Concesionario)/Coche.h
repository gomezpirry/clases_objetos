
#ifndef COCHE_H_
#define COCHE_H_

#include "Vehiculo.h" 

class Coche : public Vehiculo { 
	private : 
		int CantidadPuertas ;
	
	public :
		Coche() ;
		Coche(int NroChasis, string Marca, string Modelo,
			  int Cilindraje, float PrecioBase, bool ObsequioHerramienta, string Color , int CantidadPuertas) ; 
		void setCantidadPuertas (int CantidadPuertas) ;
		int getCantidadPuertas () ;
		void CrearCoche (Coche* CocheACrear) ; 
		float PrecioDeVenta () ; 
		~Coche() ;
};
#endif
