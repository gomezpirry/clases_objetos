#ifndef PERSONA_H_
#define PERSONA_H_

#include <string>

using namespace std;

class Persona {
protected:
	string nombre;
	string apellido;
	int cedula;

public:
	Persona();
	Persona(string nombre, string apellido, int cedula);
	~Persona();
	

	string getNombre();
  void setNombre(string nombre);
  
  string setApellido();
  void setApellido(string apellido);
  
  int getCedula();
  void setCedula(int cedula);
	
};

#endif /* PERSONA_H_ */

