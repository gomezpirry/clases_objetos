#ifndef PERSONA_H
#define PERSONA_H

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
	void setNombre(string nombre);
	string getNombre();
	void setApellido(string apellido);
	string getApellido();
	void setCedula(int cedula);
	int getCedula();

};

#endif

