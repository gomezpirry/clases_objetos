#ifndef CURSO_H
#define CURSO_H

#include <string>
#include <vector>

using namespace std;

class Curso {
private:
	int codigo;
	string nombre;
public:
	Curso();
	~Curso();
	
	void setCodigo(int codigo){
		this->codigo = codigo;
	}
	
	int getCodigo(){
		return codigo;
	}
	
	void setNombre(string nombre){
		this->nombre = nombre;
	}
	
	string getNombre(){
		return nombre;
	}
};

#endif

