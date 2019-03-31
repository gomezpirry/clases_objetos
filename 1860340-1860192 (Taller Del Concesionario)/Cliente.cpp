
#include "Cliente.h"

// Constructor
Cliente::Cliente(){
}

 
Cliente::Cliente(string Nombre, string Apellido, int Cedula, int VehiculosComprados, float MontoCompra) : Persona (Nombre, Apellido, Cedula) { 
	this->VehiculosComprados = VehiculosComprados ;
 	this->MontoCompra = MontoCompra ;
}
	 
///////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////

// SETTERS 
void Cliente::setVehiculosComprado(int VehiculosComprados) {
	this->VehiculosComprados = VehiculosComprados ;
}

void Cliente::setMontoCompra(float MontoCompra) {
	this->MontoCompra = MontoCompra ;
}

///////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////
	 
// GETTERS
int Cliente::getVehiculosComprado() {
	return this->VehiculosComprados ;
}

float Cliente::getMontoCompra() {
	return this->MontoCompra ;
}

///////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////

void Cliente::CrearCliente(Cliente* ClienteACrear) {
	string Nombre, Apellido ;
	int Cedula ; 
	
	system("cls") ;
	
	cout << "\nPor favor ingrese los siguientes datos correspondientes \n" ;
	cout << "Ingrese el nombre: \n" ;
	cin  >> Nombre ;
	
	cout << "Ingrese el apellido: \n" ;
	cin  >> Apellido ;
	
	Cedula = common::ValidarEntero("Ingrese el numero de cedula \n" ) ;
	
	// Agregar datos al vendedor a crear
	
	ClienteACrear->setNombre(Nombre) ;
	ClienteACrear->setApellido(Apellido) ;
	ClienteACrear->setCedula(Cedula) ;
	ClienteACrear->setVehiculosComprado(0) ;
	ClienteACrear->setMontoCompra(0) ; 
	
	cout << "\n\nRegistro exitoso !! \n\n" ;	
}


///////////////////////////////////////////////////////////////////////////////////////////	 
///////////////////////////////////////////////////////////////////////////////////////////

// Destructor 	 
Cliente::~Cliente(){
}
