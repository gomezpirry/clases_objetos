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
	void menuMoto();//Permite registrar una moto nueva desde cero o con copia y mostrar las registradas
	void crearMotoCopia();//Creamos una moto con copia de la anterior
	void crearMoto();//Creamos una moto desde cero
	void mostrarMotos();//Muestra en pantalla las motos registradas
	void menuRegistrarCoche();//Permite registrar un coche nuevo desde cero o con copia
	void crearCocheCopia();//Creamos un coche con copia del anterior
	void crearCoche();//Creamos un coche desde cero
	void menuRegistrarCamion();//Permite registrar un camion nuevo desde cero o con copia
	void crearCamionCopia();//Creamos un coche con copia del anterior
	void crearCamion();//Creamos un coche desde cero
	void menuPersonas();//Muestra un menu para registrar cliente o vendedor
	void crearCliente();//Creamos un cliente
	void crearVendedor();//Creamos un vendedor
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

