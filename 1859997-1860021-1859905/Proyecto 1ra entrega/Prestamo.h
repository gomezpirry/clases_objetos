#include "Articulo.h"			// Incluimos la clase padre que es "Articulo.h"
#include "Estudiante.h"        //Incluimos la clase Estudiante para asociarla con un articulo prestamo 

#ifndef PRESTAMO_H_
#define PRESTAMO_H_


#include <iostream>
														
using namespace std;

//Clase Prestamo heredad de la clase articulo_______________
class Prestamo : public Articulo {
private:
	
	int tiempo;
	Estudiante estudiante;		//atributos propios de la clase_____Estos asociados a clases definidas
	Articulo articulo; 
	
public:
	Prestamo();
	Prestamo(int ident, string estado,int valor, int depreciacion, int dia,mes,anio);  	//constructores ____
	~Prestamo();	// destuctror_______
	
//linea de metodos___________________________
	
	void modificarInfo();
	void cargarInfo();
	void eliminarRegistro();
	void asignarEstudiante();
	void asignarProfesor();
	void modificarAsignacion();
	void consultarHistorialPrestamo();
	void consultarHistorialEstudiante();
	
	
};

#endif /* PRESTAMO_H_ */
