#include "cliente.h"

//constructor
cliente::cliente() {
	
};


//getters

int cliente::getCanTvehiculosComprados(){
	return CanTvehiculosComprados;
};
int cliente::getMontoCompraCliente() {
	return MontoCompraCliente;
};

//setters

void cliente::setCanTvehiculosComprados(int canTvehiculosComprados) {
	this->CanTvehiculosComprados = canTvehiculosComprados ;
};


void cliente::setMontoCompraCliente(int montoCompraCliente) {
	this->MontoCompraCliente = montoCompraCliente;
};


