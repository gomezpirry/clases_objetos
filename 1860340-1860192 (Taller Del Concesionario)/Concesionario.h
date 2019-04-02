
#ifndef CONCESIONARIO_H_
#define CONCESIONARIO_H_
#include <iostream>
#include <string>
#include <vector>
#include "Moto.h"
#include "Coche.h"
#include "Camion.h" 
#include "Vendedor.h"
#include "Cliente.h"

using namespace std ;

class Concesionario {
	private :
		vector <Moto*> MotosDis ;
		vector <Coche*> Coches ;
		vector <Camion*> Camiones ;
		vector <Vendedor*> Vendedores ;
		vector <Cliente*> Clientes ;
		
	public :
		Concesionario () ;
		void AgregarMoto () ; 
		void AgregarCoche () ; 
		void AgregarCamion () ; 
		void AgregarVendedor () ; 
		void AgregarCliente () ; 
		// Mostrar datos completos
		void getMotos () ;
		void getCoches () ;
		void getCamiones () ; 
		void getVendedores () ;
		void getClientes () ;
		~Concesionario () ;  
};
#endif 
