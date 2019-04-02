#include "Menu.h"

Menu::Menu() {}

Menu::~Menu() {}

void Menu::menuPrincipal(){
	system("cls");
	do{
		try{
			cout << "Concesionario Tulua" << endl << endl;
			
			cout << "1. Menu Vehiculos" << endl;
			cout << "2. Menu Personas" << endl;
			cout << "3. Menu Venta" << endl;
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
				this->menuVenta();
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
			cout << "2. Menu coche" << endl;
			cout << "3. Menu camion" << endl;
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
				this->menuCoche();
				break;
			case 3:
				this->menuCamion();
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
	
	for(unsigned int i=0; i < motos.size(); i++){
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

void Menu::menuCoche() {
	system("cls");
	do {
		try {
			cout << "Concesionario Tulua" << endl << endl;
			
			if (coches.size() > 0) {
				cout << "1. Registrar coche con copia del anterior" << endl;
			}
			cout << "2. Registrar nuevo coche" << endl;
			cout << "3. Mostrar coches registrados" << endl;
			cout << "4. Atras" << endl;
			cout << "5. Salir" << endl;
			
			this->salir = 5;
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
				this->mostrarCoches();
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

void Menu::crearCocheCopia() {
	system("cls");
	
	cout << "Concesionario Tulua" << endl << endl;
	
	cout << "Ingrese el numero de chasis: ";
	int numChasis;
	cin >> numChasis;
	Coche* cocheTemporal = new Coche(coches.back());
	cocheTemporal->setNumChasis(numChasis);
	coches.push_back(*cocheTemporal);
	delete cocheTemporal;
	
	cout << endl << "Coche registrado correctamente" << endl;
	system("pause");
	this->menuCoche();
}

void Menu::crearCoche(){
	system("cls");
	cout << "Concesionario Tulua" << endl << endl;
	
	Coche* cocheTemporal = new Coche();
	int numChasis, cantPuertas;
	string marca, modelo, colorVehiculo;
	float cilindraje, precioBaseVenta;
	
	cout << "Ingrese numero de chasis: ";
	cin >> numChasis;
	cocheTemporal->setNumChasis(numChasis);
	
	cout << "Ingrese la marca del vehiculo: ";
	cin >> marca;
	cocheTemporal->setMarca(marca);
	
	cout << "Ingrese el modelo del vehiculo: ";
	cin >> modelo;
	cocheTemporal->setModelo(modelo);
	
	cout << "Ingrese el cilindraje del vehiculo: ";
	cin >> cilindraje;
	cocheTemporal->setCilindraje(cilindraje);
	
	cout << "Ingrese el precio base de venta del vehiculo: ";
	cin >> precioBaseVenta;
	cocheTemporal->setPrecioBaseVenta(precioBaseVenta);
	
	cout << "Desea agregar color al vehiculo?(s=si , n=no): ";
	cin >> colorVehiculo;
	if(colorVehiculo == "s" or colorVehiculo == "S"){
		cout << "Color del Vehiculo: ";
		cin >> colorVehiculo;
		cocheTemporal->setColorVehiculo(colorVehiculo);
	}
	
	cout << "Viene herramientas en vehiculo?(s=si , n=no): ";
	cin >> colorVehiculo;
	if(colorVehiculo == "s" or colorVehiculo == "S"){
		cocheTemporal->setVienenHerramientas(true);
	} else {
		cocheTemporal->setVienenHerramientas(false);
	}
	
	cout << "Ingrese la cantidad de puertas: ";
	cin >> cantPuertas;
	cocheTemporal->setCantPuertas(cantPuertas);
	
	cocheTemporal->calcularPrecioVenta();
	this->coches.push_back(*cocheTemporal);
	delete cocheTemporal;
	cout << "Coche creado correctamente" << endl << endl;
	system("pause");
	this->menuCoche();
}

void Menu::mostrarCoches() {
	system("cls");
	cout << "Concesionario Tulua" << endl << endl;
	
	for(unsigned int i=0; i < coches.size(); i++){
		cout << "marca: " << coches[i].getMarca() << endl;
		cout << "modelo: " << coches[i].getModelo() << endl;
		cout << "numChasis: " << coches[i].getNumChasis() << endl;
		cout << "cilindraje: " << coches[i].getCilindraje() << endl;
		cout << "precioBase: " << coches[i].getPrecioBaseVenta() << endl;
		cout << "color: " << coches[i].getColorVehiculo() << endl;
		cout << "herramientas: " << coches[i].getVienenHerramientas() << endl;
		cout << "precioVenta: " << coches[i].getPrecioVenta() << endl;
		cout << "numPuertas: " << coches[i].getCantPuertas() << endl;
		cout << "-----------------------------------------" << endl << endl;
	}
	system("pause");
	this->menuCoche();
}

void Menu::menuCamion() {
	system("cls");
	do {
		try {
			cout << "Concesionario Tulua" << endl << endl;
			
			if (camiones.size() > 0) {
				cout << "1. Registrar camion con copia del anterior" << endl;
			}
			cout << "2. Registrar nuevo camion" << endl;
			cout << "3. Mostrar camiones registrados" << endl;
			cout << "4. Atras" << endl;
			cout << "5. Salir" << endl;
			
			this->salir = 5;
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
				this->mostrarCamiones();
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

void Menu::crearCamionCopia() {
	system("cls");
	
	cout << "Concesionario Tulua" << endl << endl;
	
	cout << "Ingrese el numero de chasis: ";
	int numChasis;
	cin >> numChasis;
	Camion* camionTemporal = new Camion(camiones.back());
	camionTemporal->setNumChasis(numChasis);
	camiones.push_back(*camionTemporal);
	delete camionTemporal;
	
	cout << endl << "Camion registrado correctamente" << endl;
	system("pause");
	this->menuCamion();
}

void Menu::crearCamion(){
	system("cls");
	cout << "Concesionario Tulua" << endl << endl;
	
	Camion* camionTemporal = new Camion();
	int numChasis, cantPuertas;
	string marca, modelo, colorVehiculo;
	float cilindraje, precioBaseVenta, capacidadCarga;
	
	cout << "Ingrese numero de chasis: ";
	cin >> numChasis;
	camionTemporal->setNumChasis(numChasis);
	
	cout << "Ingrese la marca del vehiculo: ";
	cin >> marca;
	camionTemporal->setMarca(marca);
	
	cout << "Ingrese el modelo del vehiculo: ";
	cin >> modelo;
	camionTemporal->setModelo(modelo);
	
	cout << "Ingrese el cilindraje del vehiculo: ";
	cin >> cilindraje;
	camionTemporal->setCilindraje(cilindraje);
	
	cout << "Ingrese el precio base de venta del vehiculo: ";
	cin >> precioBaseVenta;
	camionTemporal->setPrecioBaseVenta(precioBaseVenta);
	
	cout << "Desea agregar color al vehiculo?(s=si , n=no): ";
	cin >> colorVehiculo;
	if(colorVehiculo == "s" or colorVehiculo == "S"){
		cout << "Color del Vehiculo: ";
		cin >> colorVehiculo;
		camionTemporal->setColorVehiculo(colorVehiculo);
	}
	
	cout << "Viene herramientas en vehiculo?(s=si , n=no): ";
	cin >> colorVehiculo;
	if(colorVehiculo == "s" or colorVehiculo == "S"){
		camionTemporal->setVienenHerramientas(true);
	} else {
		camionTemporal->setVienenHerramientas(false);
	}
	
	cout << "Ingrese la cantidad de puertas: ";
	cin >> cantPuertas;
	camionTemporal->setCantPuertas(cantPuertas);
	
	cout << "Ingrese la capacidad de carga: ";
	cin >> capacidadCarga;
	camionTemporal->setCapacidadCargar(capacidadCarga);
	
	camionTemporal->calcularPrecioVenta();
	this->camiones.push_back(*camionTemporal);
	delete camionTemporal;
	cout << "Camion creado correctamente" << endl << endl;
	system("pause");
	this->menuCamion();
}

void Menu::mostrarCamiones(){
	system("cls");
	cout << "Concesionario Tulua" << endl << endl;
	
	for(unsigned int i=0; i < camiones.size(); i++){
		cout << "marca: " << camiones[i].getMarca() << endl;
		cout << "modelo: " << camiones[i].getModelo() << endl;
		cout << "numChasis: " << camiones[i].getNumChasis() << endl;
		cout << "cilindraje: " << camiones[i].getCilindraje() << endl;
		cout << "precioBase: " << camiones[i].getPrecioBaseVenta() << endl;
		cout << "color: " << camiones[i].getColorVehiculo() << endl;
		cout << "herramientas: " << camiones[i].getVienenHerramientas() << endl;
		cout << "precioVenta: " << camiones[i].getPrecioVenta() << endl;
		cout << "numPuertas: " << camiones[i].getCantPuertas() << endl;
		cout << "capacidadCarga: " << camiones[i].getCapacidadCarga() << endl;
		cout << "-----------------------------------------" << endl << endl;
	}
	system("pause");
	this->menuCamion();
}

void Menu::menuPersonas() {
	system("cls");
	do{
		try{
			cout << "Concesionario Tulua" << endl << endl;
			
			cout << "1. Registrar cliente" << endl;
			cout << "2. Mostrar clientes" << endl;
			cout << "3. Registrar vendedor" << endl;
			cout << "4. Mostrar vendedores" << endl;
			cout << "5. Atras" << endl;
			cout << "6. Salir" << endl;
			
			this->salir = 6;
			cout << "opcion: ";
			cin >> this->opcion;
			
			switch(opcion){
			case 1:
				this->crearCliente();
				break;
			case 2:
				this->mostrarClientes();
				break;
			case 3:
				this->crearVendedor();
				break;
			case 4:
				this->mostrarVendedores();
				break;
			case 5:
				this->menuPrincipal();
				break;
			case 6:
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

void Menu::crearCliente() {
	system("cls");
	cout << "Concesionario Tulua" << endl << endl;
	
	Cliente* clienteTemporal = new Cliente();
	int cedula;
	string nombre,apellido;
	
	cout<<"Ingrese la Cedula: ";
	cin >> cedula;
	clienteTemporal->setCedula(cedula);
	
	cout<<"Ingrese el Nombre: ";
	cin>>nombre;
	clienteTemporal->setNombre(nombre);
	
	cout<<"Ingrese el Apellido: ";
	cin>>apellido;
	clienteTemporal->setApellido(apellido);
	
	clientes.push_back(*clienteTemporal);
	
	cout << "Cliente creado correctamente" << endl << endl;
	system("pause");
	this->menuPersonas();
}

void Menu::mostrarClientes(){
	system("cls");
	cout << "Concesionario Tulua" << endl << endl;
	
	for(unsigned int i=0;i<clientes.size();i++){
		cout<<"Nombre: "<<clientes[i].getNombre()<<endl;
		cout<<"Apelldo: "<<clientes[i].getApellido()<<endl;
		cout<<"Cedula: "<<clientes[i].getCedula()<<endl;
		cout<<"-----------------------------------------"<<endl;
	}
	
	system("pause");
	this->menuPersonas();
}

void Menu::crearVendedor() {
	system("cls");
	cout << "Concesionario Tulua" << endl << endl;
	
	Vendedor* vendedorTemporal = new Vendedor();
	int cedula;
	string nombre,apellido;
	
	cout<<"Ingrese la Cedula: ";
	cin >> cedula;
	vendedorTemporal->setCedula(cedula);
	
	cout<<"Ingrese el Nombre: ";
	cin>>nombre;
	vendedorTemporal->setNombre(nombre);
	
	cout<<"Ingrese el Apellido: ";
	cin>>apellido;
	vendedorTemporal->setApellido(apellido);
	
	vendedores.push_back(*vendedorTemporal);
	
	cout << "Vendedor creado correctamente" << endl;
	system("pause");
	this->menuPersonas();
}

void Menu::mostrarVendedores() {
	system("cls");
	cout << "Concesionario Tulua" << endl << endl;
	
	for(unsigned int i=0;i<vendedores.size();i++){
		cout<<"Nombre: "<<vendedores[i].getNombre()<<endl;
		cout<<"Apelldo: "<<vendedores[i].getApellido()<<endl;
		cout<<"Cedula: "<<vendedores[i].getCedula()<<endl;
		cout<<"-----------------------------------------"<<endl;
	}
	
	system("pause");
	this->menuPersonas();
}

void Menu::menuVenta() {
	system("cls");
	do{
		try{
			cout << "Concesionario Tulua" << endl << endl;
			
			cout << "1. Registrar venta" << endl;
			cout << "2. Mostrar ventas" << endl;
			cout << "3. Atras" << endl;
			cout << "4. Salir" << endl;
			
			this->salir = 4;
			cout << "opcion: ";
			cin >> this->opcion;
			
			switch(opcion){
			case 1:
				this->crearVenta();
				break;
			case 2:
				this->mostrarVentas();
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

void Menu::crearVenta() {
	system("cls");
	cout << "Concesionario Tulua" << endl << endl;
	
	Venta* ventaTemporal = new Venta();
	int cedula, chasis, cantVehiculos;
	
	cout << "Ingrese cedula del cliente: ";
	cin >> cedula;
	
	for(unsigned int i=0; i < clientes.size(); i++) {
		if(clientes[i].getCedula() == cedula){
			ventaTemporal->setCliente(&clientes[i]);
		}
	}
	
	cout << "Ingrese cedula del vendedor: ";
	cin >> cedula;
	
	for(unsigned int i=0; i < vendedores.size(); i++) {
		if(vendedores[i].getCedula() == cedula){
			ventaTemporal->setVendedor(&vendedores[i]);
		}
	}
	
	//MOTOS
	cout << "Cantidad de motos a registrar: ";
	cin >> cantVehiculos;
	
	if(cantVehiculos > 0) {
		vector<Moto*> vehiculo;
		for(int i=1; i <=cantVehiculos; i++){
			cout << "Ingrese chasis de moto " << i << ": ";
			cin >> chasis;
			
			for(unsigned int j=0; j < motos.size(); j++){
				if(motos[j].getNumChasis() == chasis){
					vehiculo.push_back(&motos[j]);
				}
			}
		}
		ventaTemporal->setMotos(vehiculo);
	}
	
	//COCHES
	cout << "Cantidad de coches a registrar: ";
	cin >> cantVehiculos;
	
	if(cantVehiculos > 0) {
		vector<Coche*> vehiculo;
		for(int i=1; i <=cantVehiculos; i++){
			cout << "Ingrese chasis de coche " << i << ": ";
			cin >> chasis;
			
			for(unsigned int j=0; j < coches.size(); j++){
				if(coches[j].getNumChasis() == chasis){
					vehiculo.push_back(&coches[j]);
				}
			}
		}
		ventaTemporal->setCoches(vehiculo);
	}
	
	//CAMION
	cout << "Cantidad de camiones a registrar: ";
	cin >> cantVehiculos;
	
	if(cantVehiculos > 0) {
		vector<Camion*> vehiculo;
		for(int i=1; i <=cantVehiculos; i++){
			cout << "Ingrese chasis de coche " << i << ": ";
			cin >> chasis;
			
			for(unsigned int j=0; j < camiones.size(); j++){
				if(camiones[j].getNumChasis() == chasis){
					vehiculo.push_back(&camiones[j]);
				}
			}
		}
		ventaTemporal->setCamiones(vehiculo);
	}
	
	ventas.push_back(*ventaTemporal);
	delete ventaTemporal;
	cout << "Venta creada correctamente" << endl;
	system("pause");
	this->menuVenta();
}

void Menu::mostrarVentas() {
	system("cls");
	cout << "Concesionario Tulua" << endl << endl;
	
	for(unsigned int i=0;i<ventas.size();i++){
		cout<<"Identificador: "<<ventas[i].getIdentificador()<<endl;
		cout<<"Vendedor: ";
		cout <<"Cedula: "<<ventas[i].getVendedor()->getCedula();
		cout <<" nombre: "<<ventas[i].getVendedor()->getNombre();
		cout << " "<<ventas[i].getVendedor()->getApellido()<< endl;
		cout<<"Cliente: ";
		cout <<"Cedula: "<<ventas[i].getCliente()->getCedula();
		cout <<" nombre: "<<ventas[i].getCliente()->getNombre();
		cout << " "<<ventas[i].getCliente()->getApellido()<< endl << endl;
		
		
		//Mostramos los vehiculos
		//Motos
		cout << "MOTOS VENDIDAS" << endl;
		for(unsigned int j=0; j < ventas[i].getMotos().size(); j++){
			cout << "marca: " << ventas[i].getMotos()[j]->getMarca() << endl;
			cout << "modelo: " << ventas[i].getMotos()[j]->getModelo() << endl;
			cout << "numChasis: " << ventas[i].getMotos()[j]->getNumChasis() << endl;
			cout << "cilindraje: " << ventas[i].getMotos()[j]->getCilindraje() << endl;
			cout << "precioBase: " << ventas[i].getMotos()[j]->getPrecioBaseVenta() << endl;
			cout << "color: " << ventas[i].getMotos()[j]->getColorVehiculo() << endl;
			cout << "herramientas: " << ventas[i].getMotos()[j]->getVienenHerramientas() << endl;
			cout << "precioVenta: " << ventas[i].getMotos()[j]->getPrecioVenta() << endl;
			cout << "------" << endl << endl;
		}
		
		//Coches
		cout << "COCHES VENDIDOS" << endl;
		for(unsigned int j=0; j < ventas[i].getCoches().size(); j++){
			cout << "marca: " << ventas[i].getCoches()[j]->getMarca() << endl;
			cout << "modelo: " << ventas[i].getCoches()[j]->getModelo() << endl;
			cout << "numChasis: " << ventas[i].getCoches()[j]->getNumChasis() << endl;
			cout << "cilindraje: " << ventas[i].getCoches()[j]->getCilindraje() << endl;
			cout << "precioBase: " << ventas[i].getCoches()[j]->getPrecioBaseVenta() << endl;
			cout << "color: " << ventas[i].getCoches()[j]->getColorVehiculo() << endl;
			cout << "herramientas: " << ventas[i].getCoches()[j]->getVienenHerramientas() << endl;
			cout << "precioVenta: " << ventas[i].getCoches()[j]->getPrecioVenta() << endl;
			cout << "numPuertas: " << ventas[i].getCoches()[j]->getCantPuertas() << endl;
			cout << "------" << endl << endl;
		}
		
		//Camiones
		cout << "CAMIONES VENDIDOS" << endl;
		for(unsigned int j=0; j < ventas[i].getCamiones().size(); j++){
			cout << "marca: " << ventas[i].getCamiones()[j]->getMarca() << endl;
			cout << "modelo: " << ventas[i].getCamiones()[j]->getModelo() << endl;
			cout << "numChasis: " << ventas[i].getCamiones()[j]->getNumChasis() << endl;
			cout << "cilindraje: " << ventas[i].getCamiones()[j]->getCilindraje() << endl;
			cout << "precioBase: " << ventas[i].getCamiones()[j]->getPrecioBaseVenta() << endl;
			cout << "color: " << ventas[i].getCamiones()[j]->getColorVehiculo() << endl;
			cout << "herramientas: " << ventas[i].getCamiones()[j]->getVienenHerramientas() << endl;
			cout << "precioVenta: " << ventas[i].getCamiones()[j]->getPrecioVenta() << endl;
			cout << "numPuertas: " << ventas[i].getCamiones()[j]->getCantPuertas() << endl;
			cout << "capacidadCarga: " << ventas[i].getCamiones()[j]->getCapacidadCarga() << endl;
			cout << "------" << endl << endl;
		}
		
		cout<<"-----------------------------------------"<<endl;
	}
	
	system("pause");
	this->menuVenta();
}