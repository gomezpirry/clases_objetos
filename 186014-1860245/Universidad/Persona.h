#ifndef Persona_h
#define Persona_h

#include <string>
using namespace std;

class Persona{
	protected:
		string nombre;
		string apellido;
		int cedula;
		char sexo;
		int telefono;
		int edad;
		bool activo;
	public:
		Persona();
		Persona(string nombre,string apellido,int cedula,char sexo,int telefono,int edad);
		~Persona();
		void setNombre(string nombre);
		void setApellido(string apellido);
		void setCedula(int cedula);
		void setSexo(char sexo);
		void setTelefono(int telefono);
		void setEdad(int edad);
		string getNombre();
		string getApellido();
		int getCedula();
		char getSexo();
		int getTelefono();
		int getEdad();
		
};
#endif
