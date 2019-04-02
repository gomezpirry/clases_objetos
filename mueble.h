/*
 * mueble.h
 *
 *  Created on: 14/03/2019
 *      Author: jcami
 */

#ifndef MUEBLE_H_
#define MUEBLE_H_
#include "articulos.h"
#include <vector>
namespace std {

class mueble : public articulos {
private:
	vector<cargar>cargar;
	vector<modificar>modificar;

public:
	mueble();
	~mueble();

	vector<cargar> getCargar() {
		return cargar;
	}

	vector<modificar> getModificar() {
		return modificar;
	}
};

} /* namespace std */

#endif /* MUEBLE_H_ */
