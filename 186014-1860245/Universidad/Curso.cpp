#include "Curso.h"
#include <iostream>

Curso::Curso(){
}

Curso::Curso(int codigo,string nombre,int creditos){
	this->codigo = codigo;
	this->nombre = nombre;
	this->creditos = creditos;
	vector<Estudiante*> estudiantes; 
	
}

Curso::~Curso(){
}

vector<Estudiante*> Curso::getestudiantes(){
	return estudiantes;
}

vector<Profesor*> Curso::getprofesores(){
	return profesores;
}

bool Curso::Asignar(Profesor* profesor){
	if(this->profesores.size() < 20){
		this->profesores.push_back(profesor);
		return true;
	}else{
		return false;
	}
}

bool Curso::Matricular(Estudiante* estudiante){
	if(this->estudiantes.size() < 50){
	this->estudiantes.push_back(estudiante);
	return true;
}else {
	return false;
}
}

bool Curso::verificarEstudiante(int codigo){
	bool encontro = false;
	for(int i=0;i<estudiantes.size();i++){
		if(estudiantes[i]->getCodigo() == codigo)
		encontro = true;
	}
	return encontro;
}

bool Curso::verificarProfesor(int codigo){
	bool verificar = false;
	for(int i=0;i<profesores.size();i++){
		if(profesores[i]->getCodigo() == codigo){
			verificar = true;
		}
	}
	return verificar;
}

void Curso::setCodigo(int codigo){
	this->codigo = codigo;
}

void Curso::setNombre(string nombre){
	this->nombre = nombre;
}

void Curso::setCredito(int creditos){
	this->creditos = creditos;
}

int Curso::getCodigo(){
	return codigo;
}

string Curso::getNombre(){
	return nombre;
}

int Curso::getCreditos(){
	return creditos;
}

