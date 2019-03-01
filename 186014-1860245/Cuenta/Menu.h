#ifndef Menu_h
#define Menu_h
#include <string>
#include "Cuenta.h"
using namespace std;

class Menu{
private:
	int numero;
	string clave;
	float saldo;
	Cuenta* C1;
public:
	Menu();
	Menu(int numero,string clave,float saldo,Cuenta* C1);
	~Menu();
	void MenuRegistro();
	bool MenuIngresar();
	void MenuOpciones();
	bool MenuRetiro();
	float MenuConsignacion();
	float MenuConsultar();
	string MenuCambiar();
};
#endif // Menu_h
