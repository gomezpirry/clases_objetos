
#ifndef ESTUDIANTE_H_
#define ESTUDIANTE_H_
#include <iostream>
#include "Persona.h"
#include "Articulo.h"

using namespace std ;

class Estudiante : Persona {
	private :
		string Carrera ; 
		int Codigo ;
		int Semestre ;
		int ValorMultaAcomulada ;
		bool EstadoDeMulta ;
		bool EstadoDeEstudiante ;
		vector <Articulo>* ArticulosPrestados ;
	
	public :
		Estudiante () ;
		Estudiante (string Nombre, string Apellido, string Email, int Edad, int Cedula, int Telefono,
					string Carrera, int Codigo, int Semestre, int ValorMultaAcomulada, bool EstadoDeMulta, bool EstadoDeEstudiante) ;					
		void setCarrera (string Carrera) ;
		void setCodigo (int Codigo) ;
		void setSemestre (int Semestre) ;
		void CorrerValorMulta (int ValorMultaAcomulada) ;
		void setEstadoDeMulta (bool EstadoDeMulta) ;
		void setEstadoDeEstudiante (bool EstadoDeEstudiante) ;
		string getCarrera () ;
		int getCodigo () ;
		int getSemestre ()  ;
		int getValorMultaAcomulada () ;
		bool getEstadoDeMulta () ;
		bool getEstadoDeEstudiante () ;
		Estudiante* CrearDatosDeObjetoEstudiante (Estudiante &EstudianteTemporal) ;
		void Prestamo (Articulo &ArticuloTemporal) ;
		void Devolucion (Articulo &Articulo) ;
				
		~Estudiante () ;
};
#endif
