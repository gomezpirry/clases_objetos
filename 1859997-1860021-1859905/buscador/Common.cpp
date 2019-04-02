#include "Common.h"

int common::validarEntero(string mensaje) { // Esta funcion solicta un enetro por consola y valida que sea correcto
	int validar;
	
	system("cls");
	cout << mensaje;
	cin >> validar;

	while(true) {
		if(cin.fail()) {
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			cout << "Has ingresado un valor no valido" << endl;
			cout << mensaje;
			cin >> validar;
		}
		if(!cin.fail())
			break;
	}
	
	return validar;	
}