
#ifndef CAMION_H_
#define CAMION_H_

#include "Vehiculo.h"

class Camion : public Vehiculo {
	private :
		int Puertas ;
		float KilogramosParaCamion ; 
	
	public :
		Camion () ;
		Camion(int NroChasis, string Marca, string Modelo,
			  int Cilindraje, float PrecioBase, bool ObsequioHerramienta, string Color , int CantidadPuertas, int Kilogramos) ;
	
		void setPuertas (int Puertas) ;
		void setKilogramosParaCamion (float KilogramosParaCamion) ;
		int getPuertas () ; 
		float getKilogramosParaCamion () ; 
		void CrearCamion (Camion* CamionParaCrear) ; 
		float PrecioDeVenta () ; 
		~Camion () ; 
}; 
#endif 
