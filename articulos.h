/*
 * articulos.h
 *
 *  Created on: 14/03/2019
 *      Author: jcami
 */
#include <vector>

#ifndef ARTICULOS_H_
#define ARTICULOS_H_
#include <string>
using namespace std;

class articulos {
private:

	int idientificador;
	string nombre;
	string tipo;
	bool estado;
	int depresiacion;

public:
	articulos();
	~articulos();

	int getDepresiacion() {
		return depresiacion;
	}

	bool isEstado() {
		return estado;
	}

	int getIdientificador() {
		return idientificador;
	}

	string getNombre() {
		return nombre;
	}

	string getTipo() {
		return tipo;
	}
};



#endif /* ARTICULOS_H_ */
