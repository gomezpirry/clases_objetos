
#ifndef LABORATORIO_H_
#define LABORATORIO_H_
#include <iostream>
#include <vector>
#include "Profesor.h"
#include "Estudiante.h"
#include "Informacion.h"
#include "Menu.h"
#include "ManejoDeArchivo.h"


using namespace std ;

class Laboratorio {
	private :
		vector <Profesor>* Profesores ;
		vector <Estudiante>* Estudiantes ;
		vector <Informacion>* Informaciones ;
	
	public :
		void InicioPrograma () {
			int a = 2 ;
		};
		
		void Reglas () ;
		void AgregarAlVectorProfesores (Profesor &ProfesorTemporal) ;
		void AgregarAlVectorEstudiantes (Estudiante &EstudianteTemporal) ;
		void AgregarAlVectorInformaciones (Informacion &InformacionTemporal) ;
		// Para verificar si el vector esta vacio o no
		bool VerificarVectorProfesores () ;
		bool VerificarVectorEstudiantes () ;
		bool VerificarVectorInformaciones () {
			ManejoDeArchivo a ;
			a.CrearArchivoInformacionCSV(Informaciones) ;
		} 
		
};
#endif
