#include<iostream>
#include "Persona.h"
#include <string>
using namespace std;


class Estudiante: public Persona{
private:
	int codigo;
	int multa=0;
	int tiempoentrega;
public:
	Estudiante();
	~Estudiante();
	Estudiante(string nombre, int edad, string apellido, int codigo,int multa,int tiempoentrega);

	void setCodigo(int codigo){
		this->codigo = codigo;
	}
	
	int getCodigo(){
		return codigo;
	}
	
	void setMulta(int multa){
		this->multa =  multa;
	}
	
	int getMulta(){
		return multa;
	}
	void setTiempoentrega(int tiempoentrega){
		this->tiempoentrega = tiempoentrega;
	}
	
	int getTiempoentrega(){
		return tiempoentrega;
	}
	
	void GuardarArchivoEstudiante();

};

