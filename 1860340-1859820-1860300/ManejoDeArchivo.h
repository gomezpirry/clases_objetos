
#ifndef MANEJODEARCHIVO_H_
#define MANEJODEARCHIVO_H_
#include "Menu.h"

using namespace std ;

class ManejoDeArchivo {
	private :
		int PosicionDelVector ;  // 
		
	public :
		// Manejo de Archivos Para Informacion del laboratorio
		void CrearArchivoInformacionCSV (vector <Informacion>* Informaciones) ;
		void ModificarArchivoInformacionCSV (vector <Informacion>* Informaciones) ;
		void ActualizarArchivoInformacionCSV (vector <Informacion>* Informaciones) ;
		void MostrarArchivoInformacionCSV (vector <Informacion>* Informaciones) ;
		void CargarArchivoInformacionCSV (vector <Informacion>* Informaciones) ;
    	
    	// Manejo de Archivos Para Estudiante del laboratorio
		void CrearArchivoEstudianteCSV (vector <Estudiante>* Estudiantes) ;
		void ModificarArchivoEstudianteCSV (vector <Estudiante>* Estudiantes) ;
		void ActualizarArchivoEstudianteCSV (vector <Estudiante>* Estudiantes) ;
		void MostrarArchivoEstudianteCSV (vector <Estudiante>* Estudiantes) ;
		void CargarArchivoEstudianteCSV (vector <Estudiante>* Estudiantes) ;	
		
		// Manejo de Archivos Para Profesor del laboratorio
		void CrearArchivoProfesorCSV (vector <Profesor>* Profesores) ;
		void ModificarArchivoProfesorCSV (vector <Profesor>* Profesores) ;
		void ActualizarArchivoProfesorCSV (vector <Profesor>* Profesores) ;
		void MostrarArchivoProfesorCSV (vector <Profesor>* Profesores) ;
		void CargarArchivoProfesorCSV (vector <Profesor>* Profesores) ;	
		
		// Manejo de Archivos Para Articulo del laboratorio
		void CrearArchivoArticuloCSV (vector <Articulo>* Articulos) ;
		void ModificarArchivoArticuloCSV (vector <Articulo>* Articulos) ;
		void ActualizarArchivoArticuloCSV (vector <Articulo>* Articulos) ;
		void MostrarArchivoArticuloCSV (vector <Articulo>* Articulos) ;
		void CargarArchivoArticuloCSV (vector <Articulo>* Articulos) ;	
		
		// Funcion para Cambiar de string -> int
		int CambioStringAInt (string Temporal) ;
};
#endif
