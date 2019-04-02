
#ifndef CLIENTE_H_
#define CLIENTE_H_

#include "Persona.h"

class Cliente : public Persona {
	private:
		int VehiculosComprados ;
		float MontoCompra ;
		
	public:
		Cliente () ;
		Cliente (string Nombre, string Apellido, int Cedula, int VehiculosComprados, float MontoCompra) ;
	    void setVehiculosComprado(int VehiculosComprados) ;
		void setMontoCompra( float MontoCompra) ;
		int getVehiculosComprado() ;
		float getMontoCompra() ; 
		void CrearCliente (Cliente* ClienteACrear) ; 
		~Cliente() ;
};
#endif
