#include<iostream>
#include "Profesor.h"
#include "Articulo.h"
#include "Persona.h"
#include "Estudiante.h"
#include <string>
#include <vector>
using namespace std;

class Laboratorio{
private:
	vector<Articulo*> arti;
	vector<Profesor*> profe;
	vector<Estudiante*> estu;
	
public:
	Laboratorio();
	~Laboratorio();
   void setArticulos(Articulo* articulos){
	   this->arti.push_back(articulos);
   }
   vector<Articulo*> getArticulos(){
	   return arti;
   }
   
   void setProfesores(Profesor* profesores){
	   this->profe.push_back(profesores);
   }
   vector<Profesor*> getProfesor(){
	   return profe;
   }
   
   void setEstudiantes(Estudiante* estudiante){
	   this->estu.push_back(estudiante);
   }
   void GuardarAchivoLaboratorio();
	
};
