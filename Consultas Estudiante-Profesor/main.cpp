/*
 * main.cpp
 *
 *  Created on: 1/03/2019
 *      Author: Usuario
 */
#include "Estudiante.h"
#include <iostream>

using namespace std;

int main() {

	Estudiante* carlos = new Estudiante(123456, "Juan", "Galindo");
	cout << carlos->getNombre() << " " << carlos->getApellido() << "\n";
	carlos->setCodigo(987456);
}



