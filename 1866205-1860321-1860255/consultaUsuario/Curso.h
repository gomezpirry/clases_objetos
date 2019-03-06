#ifndef CURSO_H
#define CURSO_H
#include "Profesor.h"
#include "Estudiante.h"
#include <string>

using namespace std;

class Curso {
private:
	int codigo;
	string nombre;
	vector<Estudiante>* estudiantes;
	Profesor profe;
public:
	Curso();
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
	
	void setEstudiantes(vector<Estudiante>* estudiantes){
		this->estudiantes = estudiantes;
	}
	
	void setProfesor(Profesor profe){
		this->profe = profe;
	}
};

#endif

