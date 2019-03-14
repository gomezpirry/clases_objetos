
#ifndef CURSO_H_
#define CURSO_H_

#include <vector>

#include "Profesor.h"
#include "Estudiante.h"

using namespace std;

class Curso {
	private:
		int 		codigo;
		string		nombre;
		int 		creditos;
		int 		maximo;
	
		Profesor*    		profesor;
		vector<Estudiante*> estudiantes;
	
	public:
		Curso();
		Curso(int codigo, string nombre, int creditos, int maximo);
		~Curso();
		
		void asignar(Profesor* profesor);
		bool matricular(Estudiante* estudiante);

// Metodos  Setter Y Getter Y demas
	int getCodigo() {
		return this->codigo;
	}
	
	
	string getNombre() {
		return this->nombre ;
	}
	
	int getCreditos() {
		return this->creditos ;
	}

	vector<Estudiante*> getEstudiantes() {
		return estudiantes;
	}
		
	Profesor* getProfesor() {
		return this->profesor;
	}
};

#endif 
