#include "Menu.h"
#include "Cuenta.h"

int main() {
	Cuenta cuenta("asdf", 1234, 1000);
	Menu menu(cuenta);
	
	menu.mostrarIngresar();
}