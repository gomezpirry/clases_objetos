#ifndef VENTA_H
#define VENTA_H

#include <vector>
#include "Vehiculo.h"
#include "Vendedor.h"
#include "Cliente.h"

using namespace std;

class Venta {
public:
	Venta();
	~Venta();
	int getIdentificador();
	void setVehiculos(vector<Vehiculo>* vehiculos);
	vector<Vehiculo>* getVehiculos();
	void setVendedor(Vendedor* vendedor);
	Vendedor* getVendedor();
	void setCliente(Cliente* cliente);
	Cliente* getCliente();
	
private:
	int identificador;
     vector<Vehiculo>* vehiculos;
	Vendedor* vendedor;
	Cliente* cliente;
};

#endif

