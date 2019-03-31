
#include "Menu.h"


// Constructor
Menu::Menu() {
}

/////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////

void Menu::MenuInicio() {
	bool* Salir = new bool (false) ; 
	
	do {
		system("cls") ;
		
		cout << "\n\tBienvenido al Concensionario De Angee \n" ;
		cout << "1. Ingresar al sistema \n" ;
		cout << "2 Salir \n\n" ;
		 
		this->Opcion = common::ValidarEntero("Ingresa una opcion: \n" ) ; 		
		
		
		switch (this->Opcion) {
			case 1 : {
				MenuPrincipal() ; 
				break; 
			}
			
			case 2 : { // Salir
				cout << "\nGracias por su atencion \n" ;  
				*Salir = true ; 
				break;
			}
			
			default : { // Opcion Incorrecta
				cout << "\nHas ingresado un dato incorrecto \n" ;
				system("pause") ;
				break;
			}
		}
	}while(!*Salir) ;
}



/////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////


void Menu::MenuPrincipal() {
	bool* Salir = new bool (false) ;
	
	do {
		system("cls") ;
		
		cout << "\nFunciones Disponibles del Concesionario \n" ;
		cout << "1. Registrar un Vendedor \n" ; 
		cout << "2. Registrar un cliente \n" ; 
		cout << "3. Registrar una moto \n" ;
		cout << "4. Registrar una coche \n" ;
		cout << "5. Registrar una camion \n" ;
		cout << "6. Atras \n" ;
		
		this->Opcion = common::ValidarEntero("Ingresa una opcion: \n" ) ;
		
		switch (this->Opcion) {
			case 1 : { // Registrar Vendedor 
				Concesionario->AgregarVendedor() ;
				system("pause") ;
				Concesionario->getVendedores() ;
				system("pause") ;
				break;
			}
			
			case 2 : { // Registra cliente
				Concesionario->AgregarCliente() ;
				system("pause") ;
				Concesionario->getClientes() ;
				system("pause") ; 
				break;
			}
			
			case 3 : { // Registro De Moto
				Concesionario->AgregarMoto() ; 
				system("pause") ;
				//Concesionario->getMotos() ;
				system("pause") ;
				break;
			}
			
			case 4 : {// Registro de coche
				Concesionario->AgregarCoche() ;
				system("pause") ;
				Concesionario->getCoches() ;
				system("pause") ; 
				break;
			}
			
			case 5 : { // Registro de CAmiones
				Concesionario->AgregarCamion() ;
				system("pause") ;
				Concesionario->getCamiones() ;
				system("pause") ;
				break;
			}
			
			case 6 : { // Salir
				*Salir = true ;
				cout << "\nGracias por su atencion \n" ;  
				break;
			}
			
			default : { // Opcion Incorrecta
				cout << "\nHas ingresado un dato incorrecto \n" ;
				system("pause") ;
				break;
			}
		}
		
	}while (!*Salir) ;
	
	delete Salir ;
}



/////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////

// Destructor 
Menu::~Menu(){
}
