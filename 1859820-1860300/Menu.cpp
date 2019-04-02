#include "Menu.h"

Menu::Menu(){
	
}

void Menu::MenuPrincipal(){
	bool* Salir = new bool (false) ;
	
	do{
		system("pause") ;
		cout << "\t\bBienvenido Al Concesionario Alukata Gosaimas \n\n" ;
		cout << "1. Agregar Vehiculo" ;
		cout << "2. Crear Vehiculo "  ;
		cout << "3. Registrar Cliente" ;
		cout << "4. Registrar Vendedor" ;
		cout << "5. Vehiculos Vendidos" ;
		
		cout << "Ingresa una opcion: \n" ;
		cin  >> this->Opcion ;
		
		switch (this->Opcion) {
			case 1 : {
				AgregarVehiculo() ;
				break;
			}
			
			case 2 : { 
				CrearVehiculo() ;
				break;
			}
			
			case 3 : { 
				RegistrarCliente() ;
				break;
			}
			
			case 4 : {
				RegistrarVendedor() ;
				break;
			}
			
			case 5 : {
				VehiculosVendidos() ;
				break;
			}
		} 
	}while (!Salir) ;
	
	delete Salir ;
}


void Menu::AgregarVehiculo(){
	
}

void Menu::CrearVehiculo(){
	
}

void Menu::MontoCompradoCliente(){
	
}

void Menu::MontoVendido(){
	
}

void Menu::RegistrarCliente(){
	
}

void Menu::RegistrarVendedor(){
	
}

void Menu::VehiculosCompradoCliente(){
	
}

void Menu::VehiculosVendidos(){
	
}

