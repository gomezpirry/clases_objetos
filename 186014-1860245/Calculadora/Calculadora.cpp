#include <iostream>
#include "Calculadora.h"
using namespace std;




Calculadora::Calculadora(){
    valor1 = 0;
    valor2 = 0;
}

Calculadora::Calculadora(double v1, double v2){
    valor1 = v1;
    valor2 = v2;
}

Calculadora::~Calculadora(){
}

double Calculadora::Suma(){
    return valor1 += valor2;
}

double Calculadora::Resta(){
    return valor1 -= valor2;
}

double Calculadora::Multiplicacion(){
     return valor1 *= valor2;
}

double Calculadora::Division(){
    return valor1 /= valor2;
}

int Calculadora::Modulo(){
    int auxvalor1 = valor1;
    int auxvalor2 = valor2;
    return auxvalor1 %= auxvalor2;
}

void Calculadora::setValor1(double valor1){
    this -> valor1 = valor1;
}

void Calculadora::setValor2(double valor2){
    this -> valor2 = valor2;
}

double Calculadora::getValor1(){
    return valor1;
}

double Calculadora::getValor2(){
    return valor2;
}
