#ifndef PERSONA_H_
#define PERSONA_H_

#include <string>

using namespace std;

class Persona {
protected:
	int cedula;
	string nombre;
	string apellido;

public:
	Persona();
	~Persona();

	string getApellido()  {
		return apellido;
	}

	void setApellido(string apellido) {
		this->apellido = apellido;
	}

	int getCedula() {
		return cedula;
	}

	void setCedula(int cedula) {
		this->cedula = cedula;
	}

	string getNombre()  {
		return nombre;
	}

	void setNombre(string nombre) {
		this->nombre = nombre;
	}

};

#endif
