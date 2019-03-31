
#include "Coche.h"

Coche::Coche(){
}


Coche::Coche(int NroChasis, string Marca, string Modelo,
			int Cilindraje, float PrecioBase, bool ObsequioHerramienta, string Color , int CantidadPuertas) 
			: Vehiculo (NroChasis, Marcas , Modelo, Cilindraje, PrecioBase, ObsequioHerramienta, Color) {
				
				
				
				
} 



void Coche::setCantidadPuertas(int CantidadPuertas) {
	this->CantidadPuertas = CantidadPuertas ;
}


int Coche::getCantidadPuertas() {
	return this->CantidadPuertas ; 
}

void Coche::CrearCoche(Coche* CocheACrear) {
	system("cls") ;
	
	int NroChasis, Cilindraje, CantidadPuertas ;
	float PrecioBase ;
	bool ObsequioHerramienta  = false ;
	string Modelo, Color = "", Marca ; 

	cout << "\n\tIngrese los datos correspondientes \n" ;
	
	NroChasis = common::ValidarEntero("Ingrese el Numero del chasis: \n" ) ;
	
	cout << "Ingrese la marca \n" ; 
	cin  >> Marca ; 
	cout << "Ingrese el Modelo: \n" ;
	cin  >> Modelo ;
	
	Cilindraje = common::ValidarEntero("Ingrese el cilindraje \n" ) ;
	
	PrecioBase = common::ValidarEntero("Ingrese El precio base: \n" ) ;
	
	CantidadPuertas = common::ValidarEntero("Ingrese la cantida de puertas: \n" ) ;
	

	CocheACrear->setNroChasis(NroChasis) ;
	CocheACrear->setMarca(Marca) ;
	CocheACrear->setModelo(Modelo) ;
	CocheACrear->setCilindraje(Cilindraje) ;
	CocheACrear->setPrecioBase(PrecioBase) ;
	CocheACrear->setObsequioHerramienta(ObsequioHerramienta) ;
	CocheACrear->setColor(Color) ;

	
	cout << "\nRegistro Exitoso !! \n\n" ;	
	
}


float Coche::PrecioDeVenta() {
	float PrecioDeVenta ;
	
	PrecioDeVenta = (this->PrecioBase + ((this->PrecioBase * (this->Cilindraje / 1000) - 1) / 100)) ;
	
	return PrecioDeVenta ;
}


Coche::~Coche(){
}
