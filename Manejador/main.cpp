/*
 * main.cpp
 *
 *  Created on: 22/03/2019
 *      Author: Usuario
 */
#include "Empleado.h"
#include "ManejadorArchivo.h"
#include <iostream>
#include <vector>

using namespace std;

int main() {

  vector<Empleado> empleados;
  ManejadorArchivo* manejador = new ManejadorArchivo();

  manejador->cargar("/home/augusto/Desktop/empleados.csv", empleados);

  for(size_t i = 0; i < empleados.size(); i++) {
    cout << "Empleado " << i << "\n";
    empleados[i].imprimirInfo();
  }
}

