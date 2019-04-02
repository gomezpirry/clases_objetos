#ifndef ARTICULO_H_
#define ARTICULO_H_

#include <iostream>

using namespace std;

//Clase articulo que luego heredaran Computo, Mueble y Prestamo _______________________ 
class Articulo {
private:
	
	int ident;
	string estado;					//	Atributo de la clase
	int valor;
	int depreciacion;
	int dia,mes,anio; 	// Atriuto establecido para luego compara en la depreciación 
	
public: 		
	Articulo();
	Articulo(int ident, string estado,int valor,int depreciacion,int dia,mes,anio);    //constructores ____
	~Articulo();  // destuctror_______

//linea de metodos_____________
	string getEstado();

	void setEstado(string estado);
	
	int getIdent();

	void setIdent(int ident);
	
	int getValor();
	
	int getDepreciacion();

	
};

#endif /* ARTICULOS_H_ */
