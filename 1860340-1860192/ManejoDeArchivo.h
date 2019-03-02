
#ifndef MANEJODEARCHIVO_H_
#define MANEJODEARCHIVO_H_
#include <iostream>
#include <fstream>
#include <vector>
#include "Usuarios.h"


class ManejoDeArchivo {
	private :
		vector <CuentaUsuario> CuentasDeBanco ;
	
	public :
		ManejoDeArchivo () ;
		void AgregarDatos (CuentaUsuario Cuenta) ;
		bool VerificarVacioVector () ;
		void CrearDatosEnCSV () ;
		void CargarDatosCSV () ;
		void MostrarDatosCSV () ;
		void MostrarCuentasIngresadas () ;
		void ActualizarCSV () ;
		void ModificarCSV (CuentaUsuario nuevo, int opcion) ;
		CuentaUsuario CuentaElegida (int opcion) ;
};

#endif 
