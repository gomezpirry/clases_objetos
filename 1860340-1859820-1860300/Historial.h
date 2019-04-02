
#ifndef HISTORIAL_H_
#define HISTORIAL_H_
#include "Estudiante.h"

using namespace std ;

class Historial {
	private :
		int HistorialPorArticulo ;
		int HistorialPorEstudiante ;
		vector <Articulo>* ArticuloHistorial ;
		vector <Estudiante>* EstudianteHistorial ;
		
				
	public :
		Historial () ;
		Historial (int HistorialPorArticulo, int HistorialPorEstudiante) ;
		void AgregarDatosAlArticuloHistorial (Articulo &ArticuloTemporal) ;
		void AgregarDatosAlEstudianteHistorial (Estudiante &EstudianteTemporal) ;
		void ConsultarHistorialPorArticulo () ;
		void ConsultarHistorialPorEstudiante () ;
		~Historial () ; 
};
#endif 
