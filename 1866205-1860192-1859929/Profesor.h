#include<iostream>
#include "Persona.h"
#include "Articulo.h"
#include <string>
#include<vector>
using namespace std;

class Profesor: public Persona{
private:
	int codigoref;
	vector<Articulo*> artii; //las clases van en singular 
	
	
public:
	Profesor();
	Profesor(string nombre, int edad, string apellido, int codigoref);
	~Profesor();
	int getCodigoref(){
		return codigoref;
	}
	
	void setCodigoref(int codigoref){
		this->codigoref = codigoref;
	}
	void setArticulos(Articulo* articulo){
		this->artii.push_back(articulo);
	}
	vector<Articulo*> getArticulos(){
		return articulo;
	}
	
	void Prestamos();
	void GuardarAchivoProfesor();
	
	
};
