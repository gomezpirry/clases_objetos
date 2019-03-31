#include "OpcionException.h"

OpcionException::OpcionException() {
	
}

OpcionException::~OpcionException() {
	
}

const char* OpcionException::what() const throw(){
	return "Opcion incorrecta";
}
