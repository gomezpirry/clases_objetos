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
			
			cout << "1. Menu moto" << endl;
			cout << "2. Registrar coche" << endl;
			cout << "3. Registrar camion" << endl;
			cout << "4. Atras" << endl;
			cout << "5. Salir" << endl;
			
			this->salir = 5;
			cout << "opcion: ";
			cin >> this->opcion;
			
			switch(opcion){
			case 1:
				this->menuMoto();
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

void Menu::menuMoto() {
	system("cls");
	do {
		try {
			cout << "Concesionario Tulua" << endl << endl;
			
			if (motos.size() > 0) {
				cout << "1. Registrar moto con copia de la anterior" << endl;
			}
			cout << "2. Registrar nueva moto" << endl;
			cout << "3. Mostrar motos registradas" << endl;
			cout << "4. Atras" << endl;
			cout << "5. Salir" << endl;
			
			this->salir = 5;
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
				this->mostrarMotos();
				break;
			case 4:
				this->menuVehiculos();
				break;
			case 5:
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

void Menu::crearMotoCopia() {
	system("cls");
	
	cout << "Concesionario Tulua" << endl << endl;
	
	cout << "Ingrese el numero de chasis: ";
	int numChasis;
	cin >> numChasis;
	Moto* motoTemporal = new Moto(motos.back());
	motoTemporal->setNumChasis(numChasis);
	motos.push_back(*motoTemporal);
	delete motoTemporal;
	
	cout << endl << "Moto registrada correctamente" << endl;
	system("pause");
	this->menuMoto();
}

void Menu::crearMoto() {
	system("cls");
	cout << "Concesionario Tulua" << endl << endl;
	
	Moto* motoTemporal = new Moto();
	int numChasis;
	string marca, modelo, colorVehiculo;
	float cilindraje, precioBaseVenta;
	
	cout << "Ingrese numero de chasis: ";
	cin >> numChasis;
	motoTemporal->setNumChasis(numChasis);
	
	cout << "Ingrese la marca del vehiculo: ";
	cin >> marca;
	motoTemporal->setMarca(marca);
	
	cout << "Ingrese el modelo del vehiculo: ";
	cin >> modelo;
	motoTemporal->setModelo(modelo);
	
	cout << "Ingrese el cilindraje del vehiculo: ";
	cin >> cilindraje;
	motoTemporal->setCilindraje(cilindraje);
	
	cout << "Ingrese el precio base de venta del vehiculo: ";
	cin >> precioBaseVenta;
	motoTemporal->setPrecioBaseVenta(precioBaseVenta);
	
	cout << "Desea agregar color al vehiculo?(s=si , n=no): ";
	cin >> colorVehiculo;
	if(colorVehiculo == "s" or colorVehiculo == "S"){
		cout << "Color del Vehiculo: ";
		cin >> colorVehiculo;
		motoTemporal->setColorVehiculo(colorVehiculo);
	}
	
	cout << "Viene herramientas en vehiculo?(s=si , n=no): ";
	cin >> colorVehiculo;
	if(colorVehiculo == "s" or colorVehiculo == "S"){
		motoTemporal->setVienenHerramientas(true);
	} else {
		motoTemporal->setVienenHerramientas(false);
	}
	
	motoTemporal->calcularPrecioVenta();
	this->motos.push_back(*motoTemporal);
	delete motoTemporal;
	cout << "Moto creada correctamente" << endl << endl;
	system("pause");
	this->menuMoto();
}

void Menu::mostrarMotos() {
	system("cls");
	cout << "Concesionario Tulua" << endl << endl;
	
	for(int i=0; i < motos.size(); i++){
		cout << "marca: " << motos[i].getMarca() << endl;
		cout << "modelo: " << motos[i].getModelo() << endl;
		cout << "numChasis: " << motos[i].getNumChasis() << endl;
		cout << "cilindraje: " << motos[i].getCilindraje() << endl;
		cout << "precioBase: " << motos[i].getPrecioBaseVenta() << endl;
		cout << "color: " << motos[i].getColorVehiculo() << endl;
		cout << "herramientas: " << motos[i].getVienenHerramientas() << endl;
		cout << "precioVenta: " << motos[i].getPrecioVenta() << endl;
		cout << "-----------------------------------------" << endl << endl;
	}
	system("pause");
	this->menuMoto();
}

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