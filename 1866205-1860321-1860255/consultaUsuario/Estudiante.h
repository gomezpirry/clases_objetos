#ifndef ESTUDIANTE_H_
#define ESTUDIANTE_H_

#include "Persona.h"
#include <string>
#include <vector>
using namespace std;

class Estudiante : public Persona {
private:
	int codigo;

public:
	Estudiante();
	Estudiante(int cedula, string nombre, string apellido, int codigo);
	~Estudiante();

	int getCodigo()  {
		return codigo;
	}

	void setCodigo(int codigo) {
		this->codigo = codigo;
	}
};

#endif /* ESTUDIANTE_H_ */
