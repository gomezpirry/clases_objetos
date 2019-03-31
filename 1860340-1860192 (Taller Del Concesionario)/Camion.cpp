
#include "Camion.h"

Camion::Camion(){
}

Camion::Camion(int NroChasis, string Marca, string Modelo,
			  int Cilindraje, float PrecioBase, bool ObsequioHerramienta, string Color , int CantidadPuertas, int Kilogramos) 
			   : Vehiculo (NroChasis, Marcas , Modelo, Cilindraje, PrecioBase, ObsequioHerramienta, Color) {
			   	
}

//////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////

//SETTERS
void Camion::setPuertas(int Puertas) {
	this->Puertas = Puertas ;
}

void Camion::setKilogramosParaCamion(float KilogramosParaCamion) {
	this->KilogramosParaCamion = KilogramosParaCamion ;

}
//////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////

// GETTERS 
int Camion::getPuertas() {
	return this->Puertas ;
}

float Camion::getKilogramosParaCamion() {
	return this->KilogramosParaCamion ;
}


//////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////

void Camion::CrearCamion(Camion* CamionParaCrear) {
	system("cls") ; 
	
	int NroChasis, Cilindraje, CantidadPuertas, Kilogramos ;
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
	
	Kilogramos = common::ValidarEntero("Ingrese el peso en kilogramos soportado: \n" ) ;

	CamionParaCrear->setNroChasis(NroChasis) ;
	CamionParaCrear->setMarca(Marca) ;
	CamionParaCrear->setModelo(Modelo) ;
	CamionParaCrear->setCilindraje(Cilindraje) ;
	CamionParaCrear->setPrecioBase(PrecioBase) ;
	CamionParaCrear->setObsequioHerramienta(ObsequioHerramienta) ;
	CamionParaCrear->setColor(Color) ;

	
	cout << "\nRegistro Exitoso !! \n\n" ;	
}

 
//////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////
 
float Camion::PrecioDeVenta(){
	float PrecioDeVenta ;
	
	PrecioDeVenta = (this->PrecioBase + ((this->PrecioBase * (this->Cilindraje / 100) - 2) / 100) + (this->KilogramosParaCamion * 1780)) ;
	 
	return PrecioDeVenta ;
}

//////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////

Camion::~Camion(){
}
