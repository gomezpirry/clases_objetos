#ifndef Curso_h
#define Curso_h

#include "Profesor.h"
#include "Estudiante.h"
#include <vector>

class Curso{
	private:
		int codigo;
		string nombre;
		int creditos;
		Profesor* profesor;
		Estudiante* estudiante;
		vector<Estudiante*> estudiantes;
		vector<Profesor*> profesores;
		
	public:
		
		Curso();
		Curso(int codigo,string nombre,int creditos);
		~Curso();
		bool Asignar(Profesor* profesor);
		bool Matricular(Estudiante* estudiante);
		void setCodigo(int codigo);
		void setNombre(string nombre);
		void setCredito(int creditos);
		bool verificarEstudiante(int codigo);
		bool verificarProfesor(int codigo);
		int getCodigo();
		string getNombre();
		int getCreditos();
		vector<Estudiante*> getestudiantes();
		vector<Profesor*> getprofesores();
};
#endif
