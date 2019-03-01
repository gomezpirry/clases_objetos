#include <iostream>
#include <stdlib.h>
#include "Calculadora.h"

using namespace std ;

int main (){
	
	float Nro1, Nro2 ;
	
	cout << "Ingrese el Numero 1: \n";
	cin  >> Nro1 ;
	
	cout << "Ingrese el Numero 2 \n";
	cin  >> Nro2 ;
	// Creo un obketo de clase Calculadora 
	Calculadora Casio ;
	// Guardo las variables en los Metodos qcreados para operar
	Casio.setX(Nro1) ;
	Casio.setY(Nro2) ;
	// Llamo los Metodos para operar de acuerdo con lo definido
	float ResultadoSuma = Casio.Suma(Nro1, Nro2) ;
	float ResultadoResta = Casio.Resta(Nro1, Nro2) ;
	float ResultadoMultiplicacion = Casio.Multiplicacion(Nro1, Nro2) ;
	float ResultadoDivision = Casio.Dividir(Nro1, Nro2) ;
	float ResultadoModulo = Casio.Modulo(Nro1, Nro2) ;
	
	// Muestro todos los resultados de las operaciones que realiza
	cout << "La suma da como resultado: " << ResultadoSuma                     << "\n\n" ;
	cout << "La resta da como resultado: " << ResultadoResta                   << "\n\n" ;
	cout << "La multiplicacion da como resultado: " << ResultadoMultiplicacion << "\n\n" ;
	cout << "La division da como resultado: " << ResultadoDivision             << "\n\n" ;
	cout << "La modulo da como resultado: " << ResultadoModulo                 << "\n\n" ;
	
	system("pause") ;
	return 0 ;
}
