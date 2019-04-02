 
#include "common.h"

int common::ValidarEntero(string Mensaje) { // Esta funcion solicta un enetro por consola y valida que sea correcto
	int Validar ;
	
	cout << Mensaje ;
	cin >> Validar ;

	while(true) {
		if(cin.fail()) {
			cin.clear() ; 
			cin.ignore(numeric_limits<streamsize>::max(), '\n') ;
			cout << "Has ingresado un valor no valido \n" ;
			cout << "Intenta de nuevo \n" ;
			system("pause") ;
			cout << "\n\n" ;
			cout << Mensaje ;
			cin >> Validar ;
		}
		if(!cin.fail())
			break;
	}
	
	return Validar ;
}
