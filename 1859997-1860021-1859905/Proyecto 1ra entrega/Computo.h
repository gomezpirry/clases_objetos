#include "Articulo.h"     // Incluimos la clase padre que es "Articulo.h"
#ifndef COMPUTO_H_
#define COMPUTO_H_


#include <iostream>

using namespace std;

//Clase computo heredad de la clase articulo_______________
class Computo : public Articulo {
private:						 	
							//definidos en la clase padre 	
public:
	Computo();
	Computo(int ident, string estado,int valor, int depreciacion,int dia,mes,anio);    //constructores ____
	~Computo();     // destuctror_______
	
//linea de metodos___________________________
	
	void modificarInfo();
	void cargarInfo();
	void asignarProfesor();
	void modificarAsignacion();

};

#endif /* COMPUTO_H_ */
