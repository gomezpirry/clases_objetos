#ifndef OPCIONEXCEPTION_H
#define OPCIONEXCEPTION_H

#include <exception>
#include <iostream>

using namespace std;

class OpcionException : public exception {
public:
	OpcionException();
	~OpcionException();
	const char* what() const throw();
private:
};

#endif

