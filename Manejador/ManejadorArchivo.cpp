/**
 * @file   ManejadorArchivo.cpp
 *
 * @date   22/03/2019
 * @author Augusto Gomez
 *
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
  // descartar las filas que no tienen todos los datos
  if(palabras.size() == 3){
    empleado.setNombre(palabras[0]);
    empleado.setApellido(palabras[1]);
    empleado.setSalario(atof(palabras[2].c_str()));
  }

  return empleado;
}

void ManejadorArchivo::cargar(string archivo, vector<Empleado> &empleados) {
  ifstream file;
  // revisar http://www.cplusplus.com/reference/fstream/fstream/open/
  file.open(archivo.c_str(), ios::out);
  char texto[512];
  while(!file.eof()) {
    file.getline(texto, 512);
    string texto_s(texto);
    // descartar lineas en blanco
    if(texto_s == "") {
      continue;
    }
    empleados.push_back(cargarLinea(texto_s));
  }

  file.close () ;
}

/*! @brief Guardar empleados en un archivo .csv
 *
 *  revisar [ifstream::open](http://www.cplusplus.com/reference/fstream/fstream/open/)
 *
 * | constant      | access                                                                                   |
 * |---------------|---------------------------------------------- -------------------------------------------|
 * | ios::in       | File open for reading: the internal stream buffer supports input operations.             |
 * | ios::out      | File open for writing: the internal stream buffer supports output operations.            |
 * | ios::binary   | Operations are performed in binary mode rather than text                                 |
 * | ios::ate      | The output position starts at the end of the file.                                       |
 * | ios::app      | All output operations happen at the end of the file, appending to its existing content   |
 * | ios::trunc    | Any contents that existed in the file before it is open are discarded.                   |
 *
 */

void ManejadorArchivo::guardar(string archivo, vector<Empleado> &empleados) {
  ofstream file;
  file.open(archivo.c_str(), ios::in | ios::trunc);
  for(Empleado empleado: empleados){
    file << empleado.getNombre() << ";";
    file << empleado.getApellido() << ";";
    // revisar https://en.cppreference.com/w/cpp/io/manip/fixed
    // revisar https://en.cppreference.com/w/cpp/io/manip/setprecision
    file << fixed << setprecision(2) << empleado.getSalario() << ";";
    file << "\n";
  }
  file.close();
}
