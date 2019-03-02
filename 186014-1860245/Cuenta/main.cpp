#include <iostream>
#include "Cuenta.h"
#include "Menu.h"
using namespace std;

int main(){
	
	Cuenta C1;
	Menu M1;
	int opcion;
	
	M1.MenuRegistro(); system("pause");system("cls");
	
	if(M1.MenuIngresar() == 1){

	do{
	M1.MenuOpciones();
	cout<<"Ingrese Su opcion: "; cin>>opcion;
	switch(opcion){
	case 1: M1.MenuRetiro();system("pause");system("cls"); break;
	case 2: M1.MenuConsignacion(); system("pause");system("cls"); break;
	case 3: M1.MenuConsultar(); system("pause");system("cls"); break;
	case 4: M1.MenuCambiar(); system("pause");system("cls"); break;
	} 
	}while(opcion != 5);
	}
	
	
	
	return 0;
}
