/*
 * prestamo.h
 *
 *  Created on: 14/03/2019
 *      Author: jcami
 */

#ifndef PRESTAMO_H_
#define PRESTAMO_H_
#include "articulos.h"
namespace std {

class prestamo : public articulos{
private:
	string Registro;
	void tiempo(int hora, int minutos,int segundos);
	bool Habilitado;
	void eliminarRegistro;
	float Multa;
public:
	prestamo();
	~prestamo();

	bool isHabilitado() {
		return Habilitado;
	}

	string getRegistro() {
		return Registro;
	}

	void geteliminarRegistro(){
		return eliminarRegistro;
	}

	float getMulta() {
		return Multa;
	}


};

} /* namespace std */

#endif /* PRESTAMO_H_ */
