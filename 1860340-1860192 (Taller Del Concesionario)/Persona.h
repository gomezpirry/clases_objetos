
#ifndef PERSONA_H_
#define PERSONA_H_
#include <string>
#include <iostream>
#include <limits>
#include "common.h"


using namespace std ;

class Persona {
	protected :
		string Nombre ;
		string Apellido ;
		int Cedula ;
	
	public:
		Persona () ;
		Persona (string Nombre, string Apellido, int Cedula) ; 
		void setNombre (string Nombre) ;
		void setApellido (string Apellido) ;
		void setCedula(int Cedula) ;
	    string getNombre() ;
		string getApellido() ;  
		int getCedula() ;
		~Persona() ;
}; 
#endif  



