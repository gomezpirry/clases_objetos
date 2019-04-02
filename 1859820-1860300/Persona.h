#ifndef PERSONA_H_
#define PERSONA_H_

#include <string>

using namespace std;

class Persona {
	private:
		string 	Nombre;
		string 	Apellido;
		int 	Cedula;
		int 	Telefono;


	public:
 		Persona();
		string 	getApellido();
		void 	setApellido(string apellido);
		int 	getCedula();
		void 	setCedula(int cedula);
		string 	getNombre();
		void 	setNombre(string nombre);
		int 	getTelefono();
		void 	setTelefono(int telefono);
};

#endif 
