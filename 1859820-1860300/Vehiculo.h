#ifndef VEHICULO_H_
#define VEHICULO_H_

#include <iostream>
#include <string>

using namespace std;

class Vehiculo{
	
	protected:
		int 	NumeroChasis;
		string 	Marca;
		int 	Modelo;
		int 	Cilindraje;
		float	PrecioBaseVenta;
		
	public:
		Vehiculo();
		//SET 
		
		void 		setNumeroChasis(int NumeroChasis);
		void 		setMarca(string Marca);
		void 		setModelo(int Modelo);
		void 		setCilindraje(int Cilindraje);
		void 		setPrecioBaseVenta(float PrecioBaseVenta);
		
		// GET
		
		float		getPrecioBaseVenta();
		int 		getNumeroChasis();
		string 		getMarca();
		int 		getModelo();
		int  		getCilindraje();	
};
#endif
