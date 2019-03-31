#include "Menu.h"

Menu::Menu() {
}

Menu::~Menu() {
}

void Menu::menuPrincipal(){
	system("cls");
	do{
		try{
			cout << "Concesionario Tulua" << endl << endl;
			
			cout << "1. Menu Vehiculos" << endl;
			cout << "2. Menu Personas" << endl;
			cout << "3. Registar Venta" << endl;
			cout << "4. Salir" << endl;
			
			this->salir = 4;
			cout << "opcion: ";
			cin >> this->opcion;
			
			switch(opcion){
			case 1:
				this->menuVehiculos();
				break;
			case 2:
				this->menuPersonas();
				break;
			case 3:
				this->crearVenta();
				break;
			case 4:
				break;
			default:
				throw OpcionException();
				break;
			}
		} catch(OpcionException &e){
			system("cls");
			cout << e.what() << endl << endl;
		}
	} while(this->opcion != this->salir);
}

void Menu::menuVehiculos() {
	system("cls");
	do{
		try{
			cout << "Concesionario Tulua" << endl << endl;
			
			cout << "1. Registrar moto" << endl;
			cout << "2. Registrar coche" << endl;
			cout << "3. Registrar camion" << endl;
			cout << "4. Atras" << endl;
			cout << "5. Salir" << endl;
			
			this->salir = 5;
			cout << "opcion: ";
			cin >> this->opcion;
			
			switch(opcion){
			case 1:
				this->menuRegistrarMoto();
				break;
			case 2:
				this->menuRegistrarCoche();
				break;
			case 3:
				this->menuRegistrarCamion();
				break;
			case 4:
				this->menuPrincipal();
				break;
			case 5:
				break;
			default:
				throw OpcionException();
				break;
			}
		} catch(OpcionException &e){
			system("cls");
			cout << e.what() << endl << endl;
		}
	} while(this->opcion != this->salir);
}

void Menu::menuRegistrarMoto() {
	system("cls");
	do {
		try {
			cout << "Concesionario Tulua" << endl << endl;
			
			if (motos.size() > 0) {
				cout << "1. Registrar moto con copia de la anterior" << endl;
			}
			cout << "2. Registrar nueva moto" << endl;
			cout << "3. Atras" << endl;
			cout << "4. Salir" << endl;
			
			this->salir = 4;
			cout << "opcion: ";
			cin >> this->opcion;
			
			switch(opcion) {
			case 1:
				this->crearMotoCopia();
				break;
			case 2:
				this->crearMoto();
				break;
			case 3:
				this->menuVehiculos();
				break;
			case 4:
				break;
			default:
				throw OpcionException();
				break;
			}
		} catch(OpcionException &e) {
			system("cls");
			cout << e.what() << endl << endl;
		}
	} while(this->opcion != this->salir);
}

void Menu::crearMotoCopia() {}

void Menu::crearMoto(){}

void Menu::menuRegistrarCoche() {
	system("cls");
	do {
		try {
			cout << "Concesionario Tulua" << endl << endl;
			
			if (motos.size() > 0) {
				cout << "1. Registrar coche con copia del anterior" << endl;
			}
			cout << "2. Registrar nuevo coche" << endl;
			cout << "3. Atras" << endl;
			cout << "4. Salir" << endl;
			
			this->salir = 4;
			cout << "opcion: ";
			cin >> this->opcion;
			
			switch(opcion) {
			case 1:
				this->crearCocheCopia();
				break;
			case 2:
				this->crearCoche();
				break;
			case 3:
				this->menuVehiculos();
				break;
			case 4:
				break;
			default:
				throw OpcionException();
				break;
			}
		} catch(OpcionException &e) {
			system("cls");
			cout << e.what() << endl << endl;
		}
	} while(this->opcion != this->salir);
}

void Menu::crearCocheCopia() {}

void Menu::crearCoche(){}

void Menu::menuRegistrarCamion() {
	system("cls");
	do {
		try {
			cout << "Concesionario Tulua" << endl << endl;
			
			if (motos.size() > 0) {
				cout << "1. Registrar camion con copia del anterior" << endl;
			}
			cout << "2. Registrar nuevo camion" << endl;
			cout << "3. Atras" << endl;
			cout << "4. Salir" << endl;
			
			this->salir = 4;
			cout << "opcion: ";
			cin >> this->opcion;
			
			switch(opcion) {
			case 1:
				this->crearCamionCopia();
				break;
			case 2:
				this->crearCamion();
				break;
			case 3:
				this->menuVehiculos();
				break;
			case 4:
				break;
			default:
				throw OpcionException();
				break;
			}
		} catch(OpcionException &e) {
			system("cls");
			cout << e.what() << endl << endl;
		}
	} while(this->opcion != this->salir);
}

void Menu::crearCamionCopia() {}

void Menu::crearCamion(){}

void Menu::menuPersonas() {
	system("cls");
	do{
		try{
			cout << "Concesionario Tulua" << endl << endl;
			
			cout << "1. Registrar cliente" << endl;
			cout << "2. Registrar vendedor" << endl;
			cout << "3. Atras" << endl;
			cout << "4. Salir" << endl;
			
			this->salir = 4;
			cout << "opcion: ";
			cin >> this->opcion;
			
			switch(opcion){
			case 1:
				this->crearCliente();
				break;
			case 2:
				this->crearVendedor();
				break;
			case 3:
				this->menuPrincipal();
				break;
			case 4:
				break;
			default:
				throw OpcionException();
				break;
			}
		} catch(OpcionException &e){
			system("cls");
			cout << e.what() << endl << endl;
		}
	} while(this->opcion != this->salir);
}

void Menu::crearCliente() {}

void Menu::crearVendedor() {}

void Menu::crearVenta() {}