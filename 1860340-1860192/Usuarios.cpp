
#include "Usuarios.h"
#include "ManejoDeArchivo.h"

using namespace std ;

// Constructor
CuentaUsuario::CuentaUsuario(){
	NumeroCuenta = "" ;
	Contrasena = "" ;
	Recuperar = "" ;
}

// Setters
void CuentaUsuario::setUsuario(string NumeroCuenta) {
	this->NumeroCuenta = NumeroCuenta ;
}

void CuentaUsuario::setContrasena(string Contrasena) {
	this->Contrasena = Contrasena ;
}


void CuentaUsuario::setRecuperar(string Recuperar) {
	this->Recuperar = Recuperar ;
}

void CuentaUsuario::setSaldo(string Saldo) {
	this->Saldo = Saldo ;
}


// Getters
string CuentaUsuario::getUsuario() {
	return this->NumeroCuenta ;
}

string CuentaUsuario::getContrasena() {
	return this->Contrasena ;
}

string CuentaUsuario::getRecuperar() {
	return this->Recuperar ;
}

string CuentaUsuario::getSaldo() {
	return this->Saldo ;
}



// Otros Metodos

// Verificar numero de cuenta
bool CuentaUsuario::VerificarCuenta(string numero, int opcion) {
	ManejoDeArchivo Verificar ;
	Verificar.CargarDatosCSV() ;
	bool VerificarCuenta ;
	if (numero == Verificar.CuentaElegida(opcion).getUsuario()) {
		VerificarCuenta = true ;
	}else {
		VerificarCuenta = false ;
	}
	
	return VerificarCuenta ;
}

// Verificar contraseña de cuenta
bool CuentaUsuario::VerificarContrasena(string contrasena, int opcion) {
	ManejoDeArchivo Verificar ;
	Verificar.CargarDatosCSV() ;
	bool VerificarContrasena ;
	if (contrasena ==  Verificar.CuentaElegida(opcion).getContrasena()) {
		VerificarContrasena = true ;
	}else {
		VerificarContrasena = false ;
	}
	
	return VerificarContrasena ;
}

// Realizar Accion de retiro
string CuentaUsuario::Retiro(float valor, int opcion) {
	bool Estado ;
	ManejoDeArchivo Temporal ;
	Temporal.CargarDatosCSV() ;
	string saldoTemporal = Temporal.CuentaElegida(opcion).getSaldo() ;
    stringstream geek(saldoTemporal) ; 	
	float CambioAEntero ; 
    geek >> CambioAEntero ; 
	if (valor <= CambioAEntero) {
		CambioAEntero -= valor ;
		stringstream sis ;
		sis << CambioAEntero ;
		string str = sis.str () ;
	
		this->Saldo = str ;
		return Saldo ;
	}
}


// Funcion de Consignar
string CuentaUsuario::Consignacion(float valor, int opcion) {

	ManejoDeArchivo Temporal ;
	Temporal.CargarDatosCSV() ;
	string saldoTemporal = Temporal.CuentaElegida(opcion).getSaldo() ; // Temporal.CuentaElegida(opcion).getSaldo() ;
    stringstream geek(saldoTemporal) ; 	
	float CambioAString ; 
    geek >> CambioAString ; 
    CambioAString += valor ;
    
    stringstream sis ;
	sis << CambioAString ;
	string str = sis.str () ;
	
	
	this->Saldo = str ;	
	return Saldo ;
}

void CuentaUsuario::ModificarDatosEnCSV(CuentaUsuario nuevo, int opcion) {
	ManejoDeArchivo Temporal ;
	Temporal.CargarDatosCSV() ;
	Temporal.ModificarCSV(nuevo, opcion) ;
	Temporal.ActualizarCSV() ;
}


// Consultar saldo
string CuentaUsuario::Consultar(int opcion) {
	ManejoDeArchivo Temporal ;
	Temporal.CargarDatosCSV() ;
	string SaldoTotal = Temporal.CuentaElegida(opcion).getSaldo() ;

	return SaldoTotal ;
}


// Crear Una cuenta
void CuentaUsuario::CrearUsuario() {
	
	cout << "Ingrese su numero de cuenta a crear: \n " ;
	cin  >> this->NumeroCuenta ;
	
	cout << "Ingrese la Contraseña nueva: \n " ;
	cin  >> this->Contrasena ;
	cout << "NOTA : Recordar este codigo si deseas recuperar tu cuenta \n" ;
	cout << "(solo se puede para recuperar contraseña) \n" ; 
	cout << "Ingrese un numero de  recuperacion de cuenta: \n" ;
	cin  >> this->Recuperar ;
	
	cout << "Ingrese su saldo inicial: \n" ;
	cin  >> this->Saldo ;
	
	cout << "Registro exitoso!! \n"  ;
	system("pause") ;
	system("cls") ;
}
/*
void CuentaUsuario::CambiarContrasena(string nueva, int opcion) {
	ManejoDeArchivo Temporal ;
	Temporal.CargarDatosCSV() ;
	string contrasenaTemporal = Temporal.CuentaElegida(opcion).getContrasena() ;
	
}*/


