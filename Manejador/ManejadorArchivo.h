/*
 * ManejadorArchivo.h
 *
 *  Created on: 22/03/2019
 *      Author: Usuario
 */

#ifndef MANEJADORARCHIVO_H_
#define MANEJADORARCHIVO_H_

#include "Empleado.h"

#include <vector>
#include <fstream>
#include <string>
#include <iostream>

using namespace std;

class ManejadorArchivo {
private:
  Empleado cargarLinea(string linea);

public:
  void guardar(string archivo, vector<Empleado> &empleados);
  void cargar(string archivo, vector<Empleado> &empleados);
};

#endif /* MANEJADORARCHIVO_H_ */
