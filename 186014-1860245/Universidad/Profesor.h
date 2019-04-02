#ifndef Profesor_h
#define Profesor_h

#include "Persona.h"


class Profesor : public Persona {
	private:
		int codigo;
		string titulo;
		
	public:
		Profesor();
		Profesor(string nombre,string apellido,int cedula,char sexo,int telefono,int edad,int codigo,string titulo);
		~Profesor();
		void setCodigo(int codigo);
		void setTitulo(string titulo);
		int getCodigo();
		string getTitulo();
};
#endif
