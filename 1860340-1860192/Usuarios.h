

#ifndef CUENTAUSUARIO_H_
#define CUENTAUSUARIO_H_
#include <iostream> 
#include <fstream>
#include <string> 
#include <sstream>

using namespace std ;

class CuentaUsuario {
	private :
		string NumeroCuenta ;
		string Contrasena;
		string Recuperar ;
		string Saldo ;

		
	public :
		CuentaUsuario () ;
		void setUsuario (string NumeroCuenta) ;
		void setContrasena (string Contrasena) ;
		void setRecuperar (string Recuperar) ;
		void setSaldo (string Saldo) ;
		string getUsuario () ;
		string getContrasena () ;
		string getRecuperar () ;
		string getSaldo () ;
		bool VerificarCuenta (string numero, int opcion) ;
		bool VerificarContrasena (string contrasena, int opcion) ;
		string Retiro (float valor, int opcion) ;
		string Consignacion (float valor, int opcion) ;
		void ModificarDatosEnCSV (CuentaUsuario nuevo, int opcion) ;
		string Consultar (int opcion) ;
		void CrearUsuario () ;	
		void CambiarContrasena (string nueva, int opcion) ;
};
#endif
