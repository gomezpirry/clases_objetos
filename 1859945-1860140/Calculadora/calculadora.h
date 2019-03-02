

#ifndef CALCULADORA_H
#define CALCULADORA_H
#include <iostream>
#include <cmath>

class Calculadora{
      private:
              int numero;
              double numero1;
              double numero2;
              double resultado;
              void imprimir();//para mandar a llmar el resultado

      public:
              Calculadora();
              void suma();
              void resta();
              void multiplicacion();
              void division();
              void Modulo();
};
#endif

