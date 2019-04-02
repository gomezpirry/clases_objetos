#ifndef CURSO_H
#define CURSO_H

#include <string>
#include <vector>
#include "Estudiante.h"
#include "Profesor.h"

using namespace std;

class Curso {
private:
	int codigo;
	string nombre;
	int maximo=50;
	Profesor* profe;
	vector<Estudiante*> estudiantes;
public:
	Curso();
	Curso(int codigo, string nombre, Profesor* profe);
	~Curso();
	
	void setCodigo(int codigo){
		this->codigo = codigo;
	}
	
	int getCodigo(){
		return codigo;
	}
	
	void setNombre(string nombre){
		this->nombre = nombre;
	}
	
	string getNombre(){
		return nombre;
	}
	
	void setProfesor(Profesor* profe){
		this->profe = profe;
	}
	
	Profesor* getProfesor(){
		return profe;
	}
	
	void setEstudiantes(Estudiante* estudiante){
		if(this->estudiantes.size() < this->maximo){
			this->estudiantes.push_back(estudiante);
		}
	}
	
	vector<Estudiante*> getEstudiantes(){
		return estudiantes;
	}
};

#endif

