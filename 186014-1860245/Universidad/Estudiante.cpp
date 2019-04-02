#include "Estudiante.h"

Estudiante::Estudiante(){
}

Estudiante::Estudiante(string nombre,string apellido,int cedula,char sexo,int telefono,int edad,int codigo,int semestre,int plan) 
: Persona(nombre,apellido,cedula,sexo,telefono,edad){
	this->codigo = codigo;
	this->semestre = semestre;
	this->plan = plan;
}

Estudiante::~Estudiante(){
}

void Estudiante::setCodigo(int codigo){
	this->codigo = codigo;
}

void Estudiante::setSemestre(int semestre){
	this->semestre = semestre;
}

void Estudiante::setPlan(int plan){
	this->plan = plan;
}

int Estudiante::getCodigo(){
	return codigo;
}

int Estudiante::getSemestre(){
	return semestre;
}

int Estudiante::getPlan(){
	return plan;
}
