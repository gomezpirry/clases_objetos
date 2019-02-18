#include <iostream>
#include "calculadora.h"

int main(int argc, char *argv[])
{
        std::cin>>opcion;

        switch (opcion)
        {
            case 1:
                calc.suma();
                std::cout<<std::endl;
                break;
            case 2:
                calc.resta();
                std::cout<<std::endl;
                break;
            case 3:
                calc.multiplicacion();
                std::cout<<std::endl;
                break;
            case 4:
                calc.division();
                std::cout<<std::endl;
                break;
            case 5:
                calc.Modulo();
                std::cout<<std::endl;
                break;

            default:
                std::cout<<"ERROR VUELA A INTENTARLO";
                break;
        }



}
