#ifndef MENU_H
#define MENU_H

#include <iostream>
#include <vector>
#include "Moto.h"
#include "Coche.h"
#include "Camion.h"
#include "Cliente.h"
#include "Vendedor.h"
#include "Venta.h"
#include "OpcionException.h"

using namespace std;

class Menu {
public:
	Menu();
	~Menu();
	void menuPrincipal();//Muestra el menu principal
	void menuVehiculos();//Muestra un menu para registrar cada tipo de vehiculo
	
	//MOTOS
	void menuMoto();//Permite registrar una moto nueva desde cero o con copia y mostrar las registradas
	void crearMotoCopia();//Creamos una moto con copia de la anterior
	void crearMoto();//Creamos una moto desde cero
	void mostrarMotos();//Muestra en pantalla las motos registradas
	
	//COCHES
	void menuCoche();//Permite registrar un coche nuevo desde cero o con copia y mostrar los registrados
	void crearCocheCopia();//Creamos un coche con copia del anterior
	void crearCoche();//Creamos un coche desde cero
	void mostrarCoches();//Muestra en pantalla los coches registrados
	
	//CAMIONES
	void menuCamion();//Permite registrar un camion nuevo desde cero o con copia y mostrar los registrados
	void crearCamionCopia();//Creamos un coche con copia del anterior
	void crearCamion();//Creamos un coche desde cero
	void mostrarCamiones();//Muestra en pantalla los camiones registrados
	
	//PERSONAS
	void menuPersonas();//Muestra un menu para registrar cliente o vendedor
	void crearCliente();//Creamos un cliente
	void mostrarClientes();//Mostramos los clientes registrados
	void crearVendedor();//Creamos un vendedor
	void mostrarVendedores();//Mostramos los vendedores registrados
	
	//VENTAS
	void crearVenta();//Creamos una venta
private:
	int opcion;
	int salir;
	vector<Moto> motos;
	vector<Coche> coches;
	vector<Camion> camiones;
	vector<Cliente> clientes;
	vector<Vendedor> vendedores;
	vector<Venta> ventas;
};

#endif

