
#include "ManejoDeArchivo.h"

using namespace std ;

ManejoDeArchivo::ManejoDeArchivo() {
}

// Agregp un objeto de cuenta a mi vector
void ManejoDeArchivo::AgregarDatos(CuentaUsuario Cuenta) {
	CuentasDeBanco.push_back(Cuenta) ;
}

// Verifico si mi vector esta vacio
bool ManejoDeArchivo::VerificarVacioVector() {
	bool Estado ;
	if (CuentasDeBanco.size() > 1){
		Estado = true ;
	}else {
		Estado = false ;
	}
	
	return Estado ;
}


// Crear CVS de con cabezeras 
void ManejoDeArchivo::CrearDatosEnCSV() {
	ifstream Archivo ("Cuentas-Actuales.csv") ;
	if (!Archivo.is_open()) {
		ofstream Archivo ;
		Archivo.open ("Cuentas-Actuales.csv", ios::app) ;
		
		Archivo << "Numero de cuenta" << ';' ;
		Archivo << "Contraseña" << ';' ;
		Archivo << "Numero de Recuperacion" << ';' ;
		Archivo << "Saldo Disponible" << '\n' ;
		Archivo.close() ;
	}
	Archivo.close() ;
}

// Cargo los datos del csv a mi vector
void ManejoDeArchivo::CargarDatosCSV() {
	CuentasDeBanco.clear() ;
	ifstream Archivo ("Cuentas-Actuales.csv") ;
	
	if (Archivo.is_open()) {
		while (!Archivo.eof()) {
			// Creo un objeto temporal para almacenar los datos de este tipo
			CuentaUsuario CantidadCuentas ;
			// Cantidad de valores que tiene la clase de cuenta de usuario
			string usuario, contrasena, recuperacion, saldo ;
			// Copio a mi variable y almanceno a mi objeto
			getline (Archivo, usuario, ';') ;
			CantidadCuentas.setUsuario(usuario) ;
			getline (Archivo, contrasena, ';') ;
			CantidadCuentas.setContrasena(contrasena) ;
			getline (Archivo, recuperacion, ';') ;
			CantidadCuentas.setRecuperar(recuperacion) ;
			getline (Archivo, saldo, '\n') ;
			CantidadCuentas.setSaldo(saldo) ;
			CuentasDeBanco.push_back (CantidadCuentas) ;				
		}
		CuentasDeBanco.pop_back() ;
	}
	Archivo.close () ;
}

// Muestro Datos de CSV
void ManejoDeArchivo::MostrarDatosCSV() {
	for (int i=1 ; i<CuentasDeBanco.size() ; i++) {
		cout <<                  "\t\nCuenta " << i << "\n" ;
		cout << i << ". Numero de cuenta: " << CuentasDeBanco[i].getUsuario () << "\n" ;
		cout << i << ". Contraseña: " << CuentasDeBanco[i].getContrasena() << "\n" ;
		cout << i << ". Numero de Recuperacion: " << CuentasDeBanco[i].getRecuperar() << "\n" ;
		cout << i << ". Saldo actual: " << CuentasDeBanco[i].getSaldo () << "\n" ;
	}
}

// Mostrar Registro de cuentas
void ManejoDeArchivo::MostrarCuentasIngresadas() {
	for (int i=1 ; i<CuentasDeBanco.size() ; i++) {
		cout <<                  "\t\nCuenta " << i << "\n" ;
		cout << i << ". Numero de cuenta: " << CuentasDeBanco[i].getUsuario () << "\n" ;
	}
}


// Actualizar Datos En CVS
void ManejoDeArchivo::ActualizarCSV() {
	ofstream Archivo ("Cuentas-Actuales.csv", ios::out) ;
	for (int i=0 ; i<CuentasDeBanco.size() ; i++) {
		Archivo << CuentasDeBanco[i].getUsuario() << ';' ;
		Archivo << CuentasDeBanco[i].getContrasena() << ';' ;
		Archivo << CuentasDeBanco[i].getRecuperar() << ';' ;
		Archivo << CuentasDeBanco[i].getSaldo() << '\n' ;
	}
	Archivo.close() ;
} 


// Devuelve el objeto de cuenta pedido
CuentaUsuario ManejoDeArchivo::CuentaElegida(int opcion) {
	CuentaUsuario Elegido ;
	for (int i=1 ; i<CuentasDeBanco.size() ; i++) {
		if (opcion == i) {
			Elegido = CuentasDeBanco[i] ;
		}
	}
	return Elegido ;
}


// Modificar Cuenta 
void ManejoDeArchivo::ModificarCSV(CuentaUsuario nuevo, int opcion) {
	for (int i=1 ; i<CuentasDeBanco.size() ; i++) {
		if (opcion == i) {
			CuentasDeBanco[i] = nuevo ;
		}
	}
}

