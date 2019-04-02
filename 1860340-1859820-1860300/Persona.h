
#ifndef PERSONA_H_
#define PERSONA_H_

#include <iostream>
#include <string>

using namespace std ;

class Persona {
	protected :
		string Nombre ;
		string Apellido ;
		string Email ;
		int Edad ;
		int Cedula ;
		int Telefono ;
	
	public :
		Persona () ;
		Persona (string Nombre, string Apellido, string Email, int Edad, int Cedula, int Telefono) ;
		void setNombre (string Nombre) ;
		void setApellido (string Apellido) ;
		void setEmail (string Email) ;
		void setEdad (int Edad) ;
		void setCedula (int Cedula) ;
		void setTelefono (int Telefono) ;
		string getNombre () ;
		string getApellido () ;
		string getEmail () ;
		int getEdad () ;
		int getCedula () ;
		int getTelefono () ;
		~Persona () ;
};
#endif
