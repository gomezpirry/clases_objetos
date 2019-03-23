/*
 * ManejadorArchivo.cpp
 *
 *  Created on: 22/03/2019
 *      Author: Usuario
 */

#include "ManejadorArchivo.h"
#include <stdlib.h>

Empleado ManejadorArchivo::cargarLinea(string linea) {
  vector<string> palabras;
  string temp = "";
  for(size_t i = 0; i < linea.size(); i++){
    if(linea[i] == ';') {
      palabras.push_back(temp);
      temp = "";
    } else {
      temp += linea[i];
    }
  }

  Empleado empleado;
  if(palabras.size() == 3){
    empleado.setNombre(palabras[0]);
    empleado.setApellido(palabras[1]);
    empleado.setSalario(atof(palabras[2].c_str()));
  }

  return empleado;
}

void ManejadorArchivo::cargar(string archivo, vector<Empleado> &empleados) {
  ifstream file(archivo.c_str()) ;
  char texto[512];
  while(!file.eof()) {
    file.getline(texto, 512);
    string texto_s(texto);
    cout << texto_s << "\n";
    empleados.push_back(cargarLinea(texto_s));
  }

  file.close () ;
}

void ManejadorArchivo::guardar(string archivo, vector<Empleado> &empleados) {

}
