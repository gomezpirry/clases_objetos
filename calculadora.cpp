

#include "calculadora.h"

Calculadora::Calculadora()
{
    numero1 = 0.0;
    numero2 = 0.0;
    resultado = 0.0;
}


void Calculadora::suma()
{
     insertar();
     resultado = numero1 + numero2;
     std::cout<<"Ingresa el primer valor: ";
     std::cin>>numero1;
     std::cout<<"Ingresa el segundo valor: ";
     std::cin>>numero2;

     imprimir();
}

void Calculadora::resta()
{

     resultado = numero1 - numero2;
     std::cout<<"Ingresa el primer valor: ";
     std::cin>>numero1;
     std::cout<<"Ingresa el segundo valor: ";
     std::cin>>numero2;
     imprimir();
}

void Calculadora::multiplicacion()
{

     resultado = numero1 * numero2;

     std::cout<<"Ingresa el primer valor: ";
     std::cin>>numero1;
     std::cout<<"Ingresa el segundo valor: ";
     std::cin>>numero2;

     imprimir();
}

void Calculadora::division()
{

     if(numero2 != 0){
         resultado = numero1 / numero2;
         std::cout<<"Ingresa el primer valor: ";
         std::cin>>numero1;
         std::cout<<"Ingresa el segundo valor: ";
         std::cin>>numero2;

         imprimir();
     }
     else
         std::cerr<<"Imposible dividir entre 'Cero'";

}

void Calculadora::Modulo(){
	insertar();
	resultado = (numero1%numero2)
		std::cout<<"Ingresa el primer valor: ";
		std::cin>>numero1;
		std::cout<<"Ingresa el segundo valor: ";
		std::cin>>numero2;
		imprimir();

}

void Calculadora::imprimir()
{
    std::cout<<"\nEl resultado es: "<<resultado;
}

