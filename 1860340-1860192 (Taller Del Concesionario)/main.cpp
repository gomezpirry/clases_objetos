#include <iostream>
#include <stdlib.h>
#include "Menu.h"

using namespace std ;

int main() {
	
	Menu* InicioDelPrograma = new Menu ;
	InicioDelPrograma->MenuInicio() ; 
	
	
	delete InicioDelPrograma ;
	
	system("pause") ;
	return 0 ;
}
