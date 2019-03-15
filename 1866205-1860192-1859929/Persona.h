#include<iostream>

#include <string>
using namespace std;


class Persona{
	
protected:
	string nombre;
	int edad;
	string apellido;
	
public:
	Persona();
	~Persona();
		
		string getNombre(){
		return nombre;
	}
	void setNombre(string nombre){
		this->nombre = nombre;
	}
	
	int getEdad(){
		return edad;
	}
	void setEdad(int edad){
		this->edad = edad;
	}
	
	string getApellido(){
		return apellido;
	}
	void setApellido(string apellido){
		this->apellido = apellido;
	}
};

