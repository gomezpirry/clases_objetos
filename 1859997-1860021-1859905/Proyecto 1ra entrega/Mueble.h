#include "Articulo.h"  		// Incluimos la clase padre que es "Articulo.h"
#ifndef MUEBLE_H_
#define MUEBLE_H_


#include <iostream>

using namespace std;

//Clase Mueble heredad de la clase articulo_______________
class Mueble : public Articulo {
private:				
							//definidos en la clase padre 
					
public:
	Mueble();
	Mueble(int ident, string estado,int valor, int depreciacion,int dia,mes,anio);		 //constructores ____
	~Mueble();			// destuctror_______
	
	
	void modificarInfo();
	void cargarInfo();
	void asignarProfesor();
	void modificarAsignacion();
};

#endif /* MUEBLE_H_ */
