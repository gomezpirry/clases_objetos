#ifndef MENU_H_
#define MENU_H_

#include <iostream>
#include <vector>
//_____________________________  incluimos las clases anteriores para realizar las asociaciones______
#include "Curso.h"       
#include "Estudiante.h"     
#include "Profesor.h"
#include "Laboratorio.h"


using namespace std;
 //Creando clase menu donde el usuario podra interactuar con la maquina_____________
class Menu {                                                
private:
	vector<Profesor> profesores = vector<Profesor>();      
	vector<Estudiante> estudiantes = vector<Estudiante>();         //Atributos de la clase_____ Estos asociados a clases definidas 
	vector<Laboratorio> laboratorios = vector<Laboratorio>();

public:
	Menu();     //constructor_______
	~Menu();	// destuctror_______


//lista de metodos________________ 	
	
	void menuPrincipal();
	void guardarArchivos();
	void consultarArticuloAsignado();
	void consultarPrestamos();
	void consultarEstadoArticulos();

};

#endif /* MENU_H_ */
