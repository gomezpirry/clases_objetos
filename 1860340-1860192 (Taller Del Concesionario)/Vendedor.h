
#ifndef VENDEDOR_H_
#define VENDEDOR_H_

#include "Persona.h"

using namespace std ;

class Vendedor : public Persona {
	private:
	 int VehiculosVendidos ;
	 float MontoVendido ;
	 
	public:
		Vendedor() ; 
		Vendedor (string Nombre, string Apellido, int Cedula, int VehiculosVendidos, float MontoVendido) ;
		void setVehiculosVendidos(int VehiculosVendidos) ;
		void setMontoVendido( float MontoVendido) ;
		int getVehiculosVendidos() ;
		float getMontoVendido() ;
		void CrearVendedor (Vendedor* VendedorACrear) ; 
		~Vendedor() ;
};
#endif
