#include<iostream>
#include<iostream>
#include "Profesor.h"
#include "Articulo.h"
#include "Persona.h"
#include "Estudiante.h"
#include "Laboratorio.h"
#include <string>
#include <vector>

using namespace std;

class Menudeopciones{
private:
	int opcion;
	vector<Profesor> profe;
	vector<Articulo> articulo;
	vector<Estudiante> estudiante;
	Laboratorio lab;
	
public:
	Menudeopciones();
	~Menudeopciones();
	void Menudeopcion();
	void MenuLaboratio();
	void MenuEstudiantes();
	void MenuArticulos();
	void MenuProfesores();
	void LeerAchivos();

};

