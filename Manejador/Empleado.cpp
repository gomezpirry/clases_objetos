/*
 * Empleado.cpp
 *
 *  Created on: 22/03/2019
 *      Author: Usuario
 */

#include "Empleado.h"

Empleado::Empleado() {
  this->nombre = "";
  this->apellido = "";
  this->salario = 0.0;
}

Empleado::Empleado(string nombre, string apellido, float salario) {
  this->nombre = nombre;
  this->apellido = apellido;
  this->salario = salario;
}

Empleado::~Empleado() {
}

float Empleado::getSalario(){
  return this->salario;
}


void Empleado::setSalario(float salario){
  this->salario = salario;
}

string Empleado::getNombre() {
  return this->nombre;
}

void Empleado::setNombre(string nombre) {
  this->nombre = nombre;
}

string Empleado::getApellido() {
  return this->apellido;
}

void Empleado::setApellido(string apellido) {
  this->apellido = apellido;
}

void Empleado::imprimirInfo(){
  printf(" nombre: %s\n apellido: %s \n salario: %7.2f\n", this->nombre.c_str(), this->apellido.c_str(), this->salario);
}
