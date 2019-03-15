#include "Articulo.h"		//Incluimos las clases Articulo, Estudiante Y Profesor  
#include "Estudiante.h"		//Para luego asociarlas al laboratorio d 							
#include "Profesor.h"				

#ifndef LABORATORIO_H_
#define LABORATORIO_H_

#include <iostream>

using namespace std;

//Clase Laboratiorio, creada para asocioar con las clases Articulo, Estudiante y Profesor_________
class Laboratorio {
private:

	Profesor*    		profesor;
	vector<Estudiante*> estudiantes;    //Atributos de la clase_____ Estos asociados a clases definidas 
	vector<Articulos> articulos;		
	
	

public:
	Laboratorio();             
	Laboratorio();				//Constructores______
	~Laboratorio();		//Destructores___________

// linea de metodos_____________________ 
	void registrarInfo();
	void modificarInfo();
	void cargarInfo();
	void registrarArticulos();
	void registrarProfesor();
	void registrarEstudiantes();
	void modificarAsignacion();

};

#endif /* LABORATORIO_H_ */
