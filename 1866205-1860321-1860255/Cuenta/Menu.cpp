#include "Menu.h"

Menu::Menu(Cuenta cuenta) {
	this->cuenta = cuenta;
}

Menu::~Menu(){
}

void Menu::mostrarIngresar(){
	system("cls");
	int numero;
	string password;
	cout << "Ingrese numero de cuenta :";cin>>numero;
	cout << "Ingrese password: ";cin >>password;
	
	if(this->cuenta.ingresar(password, numero)){
		this->principal();
	} else {
		cout << "numero de cuenta o password incorrectos" << endl;
		system("pause");
	}
}

void Menu::principal() {
	do{
		system("cls");
		cout << "1. Consignacion" << endl;
		cout << "2. Retiro" << endl;
		cout << "3. Consultar saldo" << endl;
		cout << "4. Cambiar password" << endl;
		cout << "5. Reingresar" << endl;
		cout << "6. Salir" << endl;
		
		cout << endl << "Ingrese la opcion a realizar: "; cin >> this->opcion;
		
		switch(this->opcion){
		case 1:
			this->consignacion();
			break;
		case 2:
			this->retiro();
			break;
		case 3:
			this->consultarSaldo();
			break;
		case 4:
			this->cambiarPassword();
			break;
		case 5:
			this->mostrarIngresar();
			break;
		case 6:
			break;
		}
	} while(this->opcion > 6);
}

void Menu::consignacion(){
	system("cls");
	float valor;
	cout << "Ingrese el monto a consignar: ";cin >> valor;
	this->cuenta.consignacion(valor);
	cout << "consignacion exitosa" << endl;
	system("pause");
	this->principal();
}

void Menu::retiro(){
	system("cls");
	float valor;
	cout << "Ingrese el monto a retirar: ";cin >> valor;
	if(this->cuenta.retiro(valor)){
		cout << "Retiro exitoso" << endl;
	} else {
		cout << "Fondos insuficientes" << endl;
	}
	system("pause");
	this->principal();
}

void Menu::consultarSaldo(){
	system("cls");
	cout << "Saldo disponible: " << this->cuenta.consultarSaldo() << endl;
	system("pause");
	this->principal();
}

void Menu::cambiarPassword(){
	system("cls");
	string password;
	cout << "Ingrese nueva password: ";cin >> password;
	this->cuenta.cambiarPassword(password);
	cout << "Password cambiada" << endl;
	system("pause");
	this->principal();
}