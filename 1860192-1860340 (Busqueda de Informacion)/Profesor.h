
#ifndef PROFESOR_H_
#define PROFESOR_H_

#include "Persona.h"

class Profesor: public Persona {
	private:
		int 	codigo;
		string 	titulo;
	
	public:
		Profesor();
		Profesor(string nombre, string apellido, int cedula,
				char sexo, int telefono, int edad, bool activo,
				int codigo, string titulo);
		~Profesor();
		
	// Metodos  Setter Y Getter Y demas
		int getCodigo() {
			return this->codigo ;
		}
		
		string getTitulo() {
			return this->titulo ;
		}
};

#endif 
