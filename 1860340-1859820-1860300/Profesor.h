
#ifndef PROFESOR_H_
#define PROFESOR_H_
#include <iostream>
#include "Persona.h"
#include "Articulo.h"

using namespace std ;

class Profesor : Persona {
	private :
		int Codigo ;
		string TituloProfesional ;
		vector <Articulo>* ArticulosAsignados ;
		
	public :
		Profesor () ;
		Profesor (string Nombre, string Apellido, string Email, int Edad,
				  int Cedula, int Telefono, int Codigo, string TituloProfesional) ;
		void setCodigo (int Codigo) ;
		void setTituloProfesional (string TituloProfesional) ;
		int getCodigo () ;
		string getTituloProfesional () ;	
		Profesor* CrearDatosDeProfesor (Profesor &Profesor) ;	
		void VerificarSiArticuloFueAsignado (Articulo &ArticuloTempral) ;
		~Profesor () ;
};
#endif 
