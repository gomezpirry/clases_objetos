#ifndef PROFESOR_H_
#define PROFESOR_H_

#include "Persona.h"  // Incluimos la clase padre que es "Persona.h"

using namespace std; 

//Clase Profesor heredada de la clase Persona _______________________________
class Profesor: public Persona {
private:
	int 	codigo;         //atributos propios de la clase____
	string 	titulo;
public:
	Profesor();
	Profesor(string nombre, string apellido, int cedula,
			char sexo, int telefono, int edad, bool activo,   //constructores ____________
			int codigo, string titulo);
	~Profesor();   //destructor____

//linea de metodos___________

	void modificarInfo();
	void eliminarRegistro();
	void cargarInfo();
	void consultarArticulo();

};

#endif /* PROFESOR_H_ */
