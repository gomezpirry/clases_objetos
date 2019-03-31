#ifndef VENTA_H
#define VENTA_H

#include <vector>
#include <stdlib.h>
#include "Moto.h"
#include "Coche.h"
#include "Camion.h"
#include "Vendedor.h"
#include "Cliente.h"

using namespace std;

class Venta {
public:
	Venta();
	~Venta();
	int getIdentificador();
	void setMotos(vector<Moto>* motos);
	void setCoches(vector<Coche>* coches);
	void setCamiones(vector<Camion>* camiones);
	vector<Moto>* getMotos();
	vector<Coche>* getCoches();
	vector<Camion>* getCamiones();
	void setVendedor(Vendedor* vendedor);
	Vendedor* getVendedor();
	void setCliente(Cliente* cliente);
	Cliente* getCliente();
	
private:
	int identificador;
	vector<Moto>* motos;
	vector<Coche>* coches;
	vector<Camion>* camiones;
	Vendedor* vendedor;
	Cliente* cliente;
};

#endif

