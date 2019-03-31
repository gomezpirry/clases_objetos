
#ifndef VEHICULO_H_
#define VEHICULO_H_

#include <iostream>
#include <string>
#include <stdlib.h>
#include <limits>
#include "common.h"

using namespace std ;


class Vehiculo {
	protected :
		int NroChasis ;
		string Marcas ; 
		string Modelo ;
		int Cilindraje ;
		float PrecioBase ;
		bool ObsequioHerramienta ;
		string Color ;
		 
	public :
		Vehiculo() ;
		Vehiculo (int NroChasis, string Marcas, string Modelo, int Cilindraje, float PrecioBase, bool ObsequioHerramienta, string Color) ; 
		void setNroChasis (int NroChasis) ;
		void setMarca (string MarcaVehiculo) ;
		void setModelo (string Modelo) ;
		void  setCilindraje(int Cilindraje);
		void setPrecioBase( float PrecioBase);
		void setObsequioHerramienta(bool ObsequioHerramienta) ;
		void setColor (string Color) ;
		int  getNroChasis () ;
		string getMarca () ;
		string getModelo () ;
		int getCilindraje();
		float getPrecioBase();
		bool getObsequioHerramienta() ;
		string getColor () ;
		virtual float PrecioDeVenta () = 0  ; 
		~Vehiculo() ; 
};
#endif
