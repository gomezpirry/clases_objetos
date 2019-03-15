
#ifndef INFORMACION_H_
#define INFORMACION_H_
#include <iostream>
#include <string> 
#include "Fecha.h"

using namespace std ;

class Informacion {
	private :
		string NombreDeInfo ;
		string ContenidoDeInfo ;
		
	public :	
		Informacion () ;
		Informacion (string NombreDeInfo, string ContenidoDeInfo) ;
		void setNombreDeInfo (string NombreDeInfo) ;
		void setContenidoDeInfo (string ContenidoDeInfo) ;
		string getNombreDeInfo () ;
		string getContenidoDeInfo () ;
		vector <Informacion>* DatosIniciales () ;
		Informacion* AgregarInformacion (Informacion &Informacion) ;
		~Informacion () ;
};
#endif
