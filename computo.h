/*
 * computo.h
 *
 *  Created on: 14/03/2019
 *      Author: jcami
 */

#ifndef COMPUTO_H_
#define COMPUTO_H_
#include "articulos.h"
using namespace std;



class computo : public articulos{
private:
	vector<Cargar>cargar;
	vector<Modificar>modificar;
	vector<AsignarProfesor>profesor;
public:
	computo();
	~computo();

	vector<Cargar> getCargar() {
		return cargar;
	}

	vector<Modificar> getModificar() {
		return modificar;
	}

	vector<AsignarProfesor> getProfesor() {
		return profesor;
	}
};



#endif /* COMPUTO_H_ */
