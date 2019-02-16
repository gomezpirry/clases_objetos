#include <iostream>
#include "Calculadora.h"
#include "Calculadora.cpp"

using namespace std;

int main(){
	Calculadora c1(2, 5);
	
	cout << "Suma: " << c1.sumar() << endl;
	cout << "Resta: " << c1.restar() << endl;
	cout << "Multiplicacion: " << c1.multiplicar() << endl;
	cout << "Division: " << c1.dividir() << endl;
	cout << "Modulo: " << c1.modulo() << endl;
	
	return 0;
}