#ifndef PERSONA_H_
#define PERSONA_H_

#include <string>

//Clase Persona que luego heredaran la clase Estudiante y Profesor_________________ 
class Persona {
protected:
	 int cedula;
	 string nombre;                //Atributos de la clase 
	 string apellido;
	 char sexo;       //'F' femenino  'M' masculino           
	 int telefono;
	 bool activo;  
	 int edad;

public:
	Persona();    //constructor ____
	~Persona();  // destuctror______

//linea de metodos para acceder y modidficar los atributos ____________________


	bool isActivo() {
		return activo;
	}

	void setActivo(bool activo) {
		this->activo = activo;
	}

	string getApellido()  {
		return apellido;
	}

	void setApellido(string apellido) {
		this->apellido = apellido;
	}

	int getCedula() {
		return cedula;
	}

	void setCedula(int cedula) {
		this->cedula = cedula;
	}

	int getEdad()  {
		return edad;
	}

	void setEdad(int edad) {
		this->edad = edad;
	}

	string getNombre() {
		return nombre;
	}

	void setNombre(string nombre) {
		this->nombre = nombre;
	}

	char getSexo() {
		return sexo;
	}

	void setSexo(char sexo) {
		this->sexo = sexo;
	}

	int getTelefono(){
		return telefono;
	}

	void setTelefono(int telefono) {
		this->telefono = telefono;
	}
	
	



};

#endif /* PERSONA_H_ */
