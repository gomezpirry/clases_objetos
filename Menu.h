
#ifndef MENU_H_
#define MENU_H_
#include <iostream>
#include <string>
#include <sstream> 
#include "Usuarios.h"
#include "ManejoDeArchivo.h"

using namespace std ;

class Menu {
private :
	int opcion, opcionParaObjeto ;

public:
	Menu();
	Menu(int numero) ;
	void MiniMenuDeVolver () ;
	void MostrarIngreso () ;
	void MenuDeCuentas () ;
	void MostraMenuPrincipal () ;
	void CambiarContrasena () ;
};

#endif 

