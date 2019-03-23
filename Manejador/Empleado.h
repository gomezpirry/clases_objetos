/*
 * Empleado.h
 *
 *  Created on: 22/03/2019
 *      Author: Usuario
 */

#ifndef EMPLEADO_H_
#define EMPLEADO_H_

#include <string>

using namespace std;

class Empleado {
private:

  string nombre;
  string apellido;
  float  salario;

public:

  Empleado();
  Empleado(string nombre, string apellido, float salario);
  ~Empleado();

  void setSalario(float salario);
  float getSalario();

  string getApellido();
  void setApellido(string apellido);

  string getNombre();
  void setNombre(string nombre);

  void imprimirInfo();
};

#endif /* EMPLEADO_H_ */
