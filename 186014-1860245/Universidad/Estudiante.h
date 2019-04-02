#ifndef Estudiante_h
#define Estudiante_h

#include "Persona.h"
#include <vector>


class Estudiante : public Persona {
	private:
		int codigo;
		int semestre;
		int plan;
	public:
		Estudiante();
		Estudiante(string nombre,string apellido,int cedula,char sexo,int telefono,int edad,int codigo,int semestre,int plan);
		~Estudiante();
		void setCodigo(int codigo);
		void setSemestre(int semestre);
		void setPlan(int plan);
		void setVectorEstudiantes();
		int getCodigo();
		int getSemestre();
		int getPlan();
		//vector<Curso*> getCursos();
};
#endif
