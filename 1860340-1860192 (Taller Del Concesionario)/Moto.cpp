
#include "Moto.h"


Moto::Moto() {
}



//Moto::Moto(int NroChasis, string Marcas, string Modelo, int Cilindraje, float PrecioBase, bool ObsequioHerramienta, string Color) : Vehiculo (NroChasis, Marcas, Modelo, Cilindraje, PrecioBase, ObsequioHerramienta, Color) {
//	
//	this->NroChasis = NroChasis ; 
//	
//	
//}

////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////

// Copia de Constructor
//Moto::Moto(const Moto* MotoCopia) {
//	this->NroChasis = NroChasis ;  
//}



////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////

//void Moto::setPrecioDeVenta(float PrecioVenta) {
//	this->PrecioVenta = PrecioVenta ;
//}

////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////

void Moto::CrearMoto(Moto* MotoACrear) {
	
	int NroChasis, Cilindraje ;
	float PrecioBase ;
	bool ObsequioHerramienta  = false ;
	string Modelo, Color = "", Marca ; 
	
	system("cls") ;
	
	cout << "\n\tPor favor ingresa los datos correspondiente para la moto \n\n" ;
	
	NroChasis = common::ValidarEntero("Ingrese el Numero del chasis: \n" ) ;
	
	cout << "Ingrese la maraca \n" ; 
	cin  >> Marca ; 
	cout << "Ingrese el Modelo: \n" ;
	cin  >> Modelo ;
	
	Cilindraje = common::ValidarEntero("Ingrese el cilindraje \n" ) ;
	
	PrecioBase = common::ValidarEntero("Ingrese El precio base: \n" ) ;
	

	MotoACrear->setNroChasis(NroChasis) ;
	MotoACrear->setMarca(Marca) ;
	MotoACrear->setModelo(Modelo) ;
	MotoACrear->setCilindraje(Cilindraje) ;
	MotoACrear->setPrecioBase(PrecioBase) ;
	MotoACrear->setObsequioHerramienta(ObsequioHerramienta) ;
	MotoACrear->setColor(Color) ;

	
	cout << "\nRegistro Exitoso !! \n\n" ;	
}

////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////


float Moto::PrecioDeVenta() {
	float PrecioDeVenta ;
	
	if (this->Cilindraje > 100) {
		PrecioDeVenta = (this->PrecioBase + ((3 * this->Cilindraje) * 2000)) ;	
	}else {
		PrecioDeVenta = (this->PrecioBase + ((1.5 * this->Cilindraje) * 2000)) ;
	}
	return PrecioDeVenta ; 
}

////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////

// Destructor
Moto::~Moto(){
}
