
#ifndef MENU_H_
#define MENU_H_
#include <iostream>
#include "Concesionario.h"
#include "common.h" 

using namespace std ;

class Menu {
	private :
		int Opcion ;
		
		Concesionario* Concesionario ;
	
	public :
		Menu () ;
		void MenuInicio () ;
		void MenuPrincipal() ; 
		~Menu() ; 
};
#endif
