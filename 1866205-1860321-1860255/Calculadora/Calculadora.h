/*
* Breiner Batalla - 1866205
* Jaime Mena - 1860321
* Julian Chavarro - 1860255
*/

#ifndef CALCULADORA_H
#define CALCULADORA_H
	
using namespace std;

class Calculadora{
private:
	float a;
	float b;
	
public:
	Calculadora(float a, float b);
	~Calculadora();
	float sumar();
	float restar();
	float multiplicar();
	float dividir();
	float modulo();
};

#endif
