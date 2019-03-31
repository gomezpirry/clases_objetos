#ifndef MENU_H_
#define MENU_H_

#include <iostream>
#include <string>

#include "Cliente.h"
#include "Vendedor.h"
#include "Concesionario.h"


using namespace std;

class Menu{
	private:
		int Opcion;
		
	public:
		Menu();
		
		void MenuPrincipal();
		void AgregarVehiculo();
		void CrearVehiculo(); //Constructor de copia...
		void RegistrarCliente();
		void RegistrarVendedor();
		void VehiculosVendidos();
		void MontoVendido();
		void VehiculosCompradoCliente();
		void MontoCompradoCliente();		
};
#endif

