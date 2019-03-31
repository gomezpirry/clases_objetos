
 #include "Vendedor.h"

// Constructor
 Vendedor::Vendedor(){
 }

 
 Vendedor::Vendedor(string Nombre, string Apellido, int Cedula, int VehiculosVendidos, float MontoVendido)  : Persona (Nombre, Apellido, Cedula) {
	this->VehiculosVendidos = VehiculosVendidos ;
	this-> MontoVendido = MontoVendido ; 
}

////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////

// SETTERS
void Vendedor::setVehiculosVendidos(int VehiculosVendidos) {
	this->VehiculosVendidos = VehiculosVendidos ;
}

void Vendedor::setMontoVendido(float MontoVendido) {
	this->MontoVendido = MontoVendido ;
}

////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////

// GETTERS 
int Vendedor::getVehiculosVendidos() {
	return this->VehiculosVendidos ;
}

float Vendedor::getMontoVendido() {
	return this->MontoVendido ;
}


////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////

void Vendedor::CrearVendedor(Vendedor* VendedorACrear) {
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
	
	VendedorACrear->setNombre(Nombre) ;
	VendedorACrear->setApellido(Apellido) ;
	VendedorACrear->setCedula(Cedula) ;
	VendedorACrear->setVehiculosVendidos(0) ;
	VendedorACrear->setMontoVendido(0) ; 
	
	cout << "\n\nRegistro exitoso !! \n\n" ;
} 



////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////

// Destructor
Vendedor::~Vendedor(){
}

 
 
