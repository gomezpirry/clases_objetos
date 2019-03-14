
#ifndef PERSONA_H_
#define PERSONA_H_

#include <string>

using namespace std;

class Persona {
	protected:
		string 	nombre;
		string 	apellido;
		int 	cedula;
		char	sexo;
		int		telefono;
		int		edad;
		bool	activo;
	
	public:
		Persona();
		Persona(string nombre, string apellido, int cedula,
				char sexo, int telefono, int edad, bool activo);
		~Persona();

// Metodos  Setter Y Getter Y demas
	bool isActivo()  {
		return activo;
	}

	string getApellido()  {
		return apellido;
	}

	int getCedula()  {
		return cedula;
	}

	int getEdad()  {
		return edad;
	}

	const string& getNombre() {
		return nombre;
	}

	char getSexo()  {
		return sexo;
	}

	int getTelefono() {
		return telefono;
	}
};

#endif
