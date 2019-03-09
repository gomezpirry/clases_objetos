#ifndef PROFESOR_H_
#define PROFESOR_H_

#include "Persona.h"
#include <vector>

using namespace std;

class Profesor : public Persona {
public:
	Profesor();
	Profesor(int cedula, string nombre, string apellido);
	~Profesor();
};

#endif
