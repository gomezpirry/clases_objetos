
#include "Concesionario.h"

// Constructor
Concesionario::Concesionario() {
}

//////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////

void Concesionario::AgregarMoto() {
	system("cls") ;
	Moto* MotoParaCrear ;
	MotoParaCrear->CrearMoto(MotoParaCrear) ; 
//	MotoParaCrear1->CrearMoto(MotoParaCrear1	) ; 
//	cout << "Numero de Chasis: " << MotoParaCrear->getNroChasis() << "\n" ;
//	cout << "Marca: " << MotoParaCrear->getMarca() << "\n" ;
//	cout << "Modelo: " << MotoParaCrear->getModelo() << "\n" ;
//	cout << "Cilindraje: " << MotoParaCrear->getCilindraje() << "\n" ;
//	cout << "Precio Base de la moto: " << MotoParaCrear->getPrecioBase() << "\n\n" ;
//	cout << "Apremiacion de obsequio de herramientas: " << MotoParaCrear->getObsequioHerramienta() << "\n\n" ;
//	cout << "Color de la moto: " << MotoParaCrear->getColor() << "\n\n" ;
	
//	MotosPara.push_back(MotoParaCrear) ;
}


//////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////

void Concesionario::AgregarCoche() {
	system("cls") ;
	Coche* CocheParaAgregar = new Coche ;
	CocheParaAgregar->CrearCoche(CocheParaAgregar) ;
	Coches.push_back(CocheParaAgregar) ; 
}

//////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////

void Concesionario::AgregarCamion() {
	system("cls") ;
	Camion* CamionACrear = new Camion ;
	CamionACrear->CrearCamion(CamionACrear) ;
	Camiones.push_back(CamionACrear) ; 
}

//////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////


void Concesionario::AgregarVendedor() {
	system("cls") ;
	Vendedor* VendedorAgregar = new Vendedor ;
	VendedorAgregar->CrearVendedor(VendedorAgregar) ;
	Vendedores.push_back(VendedorAgregar) ;
}

//////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////


void Concesionario::AgregarCliente() {
	system("cls") ;
	Cliente* ClienteAgregar = new Cliente ;
	ClienteAgregar->CrearCliente(ClienteAgregar) ;
	Clientes.push_back(ClienteAgregar) ;
}

//////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////

void Concesionario::getMotos() {
	system("cls") ;

	cout << "\n\tMotos Disponibles \n" ;

	for (int i=0 ; i<MotosDis.size() ; i++) {
		cout << "Moto #" << i+1 << "\n\n" ;
		cout << "Numero de Chasis: " << MotosDis[i]->getNroChasis() << "\n" ;
		cout << "Marca: " << MotosDis[i]->getMarca() << "\n" ;
		cout << "Modelo: " << MotosDis[i]->getModelo() << "\n" ;
		cout << "Cilindraje: " << MotosDis[i]->getCilindraje() << "\n" ;
		cout << "Precio Base de la moto: " << MotosDis[i]->getPrecioBase() << "\n\n" ;
		cout << "Apremiacion de obsequio de herramientas: " << MotosDis[i]->getObsequioHerramienta() << "\n\n" ;
		cout << "Color de la moto: " << MotosDis[i]->getColor() << "\n\n" ;
	}
}

//////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////

void Concesionario::getCoches() {
	system("cls") ;
	
	
	cout << "\n\tCoches Disponibles \n" ;

	for (int i=0 ; i<Coches.size() ; i++) {
		cout << "Moto #" << i+1 << "\n\n" ;
		cout << "Numero de Chasis: " << Coches[i]->getNroChasis() << "\n" ;
		cout << "Marca: " << Coches[i]->getMarca() << "\n" ;
		cout << "Modelo: " << Coches[i]->getModelo() << "\n" ;
		cout << "Cantidad de puertas: " << Coches[i]->getCantidadPuertas() << "\n" ;
		cout << "Cilindraje: " << Coches[i]->getCilindraje() << "\n" ;
		cout << "Precio Base de la moto: " << Coches[i]->getPrecioBase() << "\n\n" ;
		cout << "Apremiacion de obsequio de herramientas: " << Coches[i]->getObsequioHerramienta() << "\n\n" ;
		cout << "Color de la moto: " << Coches[i]->getColor() << "\n\n" ;
	}
}

//////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////

void Concesionario::getCamiones() {
	system("cls") ;
	
	
	cout << "\n\tCamiones Disponibles \n" ;

	for (int i=0 ; i<Camiones.size() ; i++) {
		cout << "Moto #" << i+1 << "\n\n" ;
		cout << "Numero de Chasis: " << Camiones[i]->getNroChasis() << "\n" ;
		cout << "Marca: " << Camiones[i]->getMarca() << "\n" ;
		cout << "Modelo: " << Camiones[i]->getModelo() << "\n" ;
		cout << "Cantidad de puertas: " << Camiones[i]->getPuertas() << "\n" ;
		cout << "Kilogramo soportado: " << Camiones[i]->getKilogramosParaCamion() << "\n" ;
		cout << "Cilindraje: " << Camiones[i]->getCilindraje() << "\n" ;
		cout << "Precio Base de la moto: " << Camiones[i]->getPrecioBase() << "\n\n" ;
		cout << "Apremiacion de obsequio de herramientas: " << Camiones[i]->getObsequioHerramienta() << "\n\n" ;
		cout << "Color de la moto: " << Camiones[i]->getColor() << "\n\n" ;
	}
}

//////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////

// Mostrar vendedores disponibles

void Concesionario::getVendedores() {
	system("cls") ;

	cout << "\n\tVendedores disponibles \n" ;

	for (int i=0 ; i<Vendedores.size() ; i++) {
		cout << "Vendedor #" << i+1 << "\n\n" ;
		cout << "Nombre: " << Vendedores[i]->getNombre() << "\n" ;
		cout << "Apellido: " << Vendedores[i]->getApellido() << "\n" ;
		cout << "Cedula: " << Vendedores[i]->getCedula() << "\n" ;
		cout << "Vehiculos Vendidos: " << Vendedores[i]->getVehiculosVendidos() << "\n" ;
		cout << "Monto Vendido: " << Vendedores[i]->getMontoVendido() << "\n\n" ;
	}
}

//////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////


void Concesionario::getClientes() {
	system("cls") ;

	cout << "\n\tClientes disponibles \n" ;

	for (int i=0 ; i<Clientes.size() ; i++) {
		cout << "Cliente #" << i+1 << "\n\n" ;
		cout << "Nombre: " << Clientes[i]->getNombre() << "\n" ;
		cout << "Apellido: " << Clientes[i]->getApellido() << "\n" ;
		cout << "Cedula: " << Clientes[i]->getCedula() << "\n" ;
		cout << "Vehiculos Vendidos: " << Clientes[i]->getVehiculosComprado() << "\n" ;
		cout << "Monto Vendido: " << Clientes[i]->getMontoCompra() << "\n\n" ;
	}
}


//////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////
// Destructor
Concesionario::~Concesionario() {
}
