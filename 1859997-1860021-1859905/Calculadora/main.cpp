#include <iostream>
#include "calculadora.h"
#include <stdlib.h>

using namespace std ;


    float calculadora::sumar(){
	float resultado ;
	resultado= valor1 + valor2 ;
	return resultado;}
	
	
	float calculadora::restar(){
	float resultado ;
	resultado= valor1 - valor2 ;
	return resultado;}
	
	
	float calculadora::multiplicar(){
	float resultado ;
	resultado= valor1 * valor2 ;
	return resultado;}
	
	
	float calculadora::dividir(){
	float resultado ;
	resultado= valor1 / valor2 ;
	return resultado;}
	
	


int main() {
	float valor1;
	float valor2;
	
		cout << "Ingrese valor1 : \n";
	cin  >> valor1 ;
	
	cout << "Ingrese valor2 : \n";
	cin  >> valor2 ;
	
	calculadora operacion;
	
	float resultadosumar= operacion.sumar(valor1,valor2);
		float resultadosrestar=operacion.restar(valor1,valor2);
			float resultadomultiplicar=operacion.multiplicar(valor1,valor2);
				float resultadosdividir=operacion.dividir(valor1,valor2);
				
				

	
	
    cout << "el resultado de la suma es: " << Resultadosumar   << "\n" ;
	cout << "el resultado de la resta es: " << Resultadorestar   << "\n" ;
	cout << "el resultado de la multiplicacion es: " << Resultadomultiplicar << "\n" ;
	cout << "el resultado de la division es: " << Resultadodividir   << "\n" ;

	
	
	return 0;
}
