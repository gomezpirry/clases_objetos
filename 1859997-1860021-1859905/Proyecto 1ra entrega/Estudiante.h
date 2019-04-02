#include "Persona.h"      // Incluimos la clase padre que es "Persona.h"
#ifndef ESTUDIANTE_H_
#define ESTUDIANTE_H_

//Clase Estudiante heredada de la clase Persona _______________________________
class Estudiante : public Persona {
private:
	int	 codigo;
	int  semestre;      // Atributos propios de la clase ________________
	int  plan;
public:
	Estudiante();
	Estudiante(string nombre, string apellido, int cedula,
				char sexo, int telefono, int edad, bool activo,          //constructores ____________
				int codigo, int semestre, int plan);                         
	~Estudiante(); //destructores____

//linea de metodos_______________

	int getCodigo()  {
		return codigo;
	}

	int getPlan()  {
		return plan;
	}

	int getSemestre() {
		return semestre;
	}
	
	void registrarPrestamo();
	void modificarInfo();
	void eliminarRegistro();
	void cargarInfo();
	void registrarDevolucion();
	void generarMulta();
	void pagoMulta();		
	void consultarMulta();
	
	

};

#endif /* ESTUDIANTE_H_ */
