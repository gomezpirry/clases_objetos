	
#include "Calculadora.h"


void Calculadora::setX(float x_) {
	x = x_ ;
}

void Calculadora::setY(float y_) {
	y = y_ ;
}

float Calculadora::Suma (float x_ , float y_) {
	float resultado ;	
	resultado = x_ + y_ ;
	return resultado ;		
}

float Calculadora::Resta(float x_, float y_){
	float resultado ;
	resultado = x_ - y_ ;
	return resultado ;
}

float Calculadora::Multiplicacion(float x_ , float y_) {
	float resultado ;
	resultado = x_ * y_ ;
	return resultado ;
}

float Calculadora::Dividir(float x_ , float y_) {
	float resultado ;
	resultado = x_ / y_ ;
	return resultado ;
}

float Calculadora::Modulo(float x_ , float y_) {
	int xTemporal = x_ ;
	int yTemporal = y_ ;
	float resultado ;
	resultado = xTemporal % yTemporal ;
	return resultado ;
}
