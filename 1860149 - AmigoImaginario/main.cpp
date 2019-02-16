#include <iostream>
#include "Calculadora.h"
using namespace std;

int main(){
    Calculadora calculadora;
    int opcion;
    double valor1,valor2;

    do{
        cout<<" ________________________________________________"<<endl;
        cout<<"|                                                |"<<endl;
        cout<<"|                Menu Calculadora                |"<<endl;
        cout<<"|                                                |"<<endl;
        cout<<"|               1. Sumar                         |"<<endl;
        cout<<"|               2. Resta                         |"<<endl;
        cout<<"|               3. Multiplicación                |"<<endl;
        cout<<"|               4. Division                      |"<<endl;
        cout<<"|               5. Modulo                        |"<<endl;
        cout<<"|               6. Salir ...                     |"<<endl;
        cout<<"|________________________________________________|"<<endl;
        cout<<"Digite La Opcion a Realizar : "; cin >> opcion; cin.ignore();

        switch(opcion){
            case 1:
                cout<<"Ingrese El Valor #1 a Sumar : ";
                cin>> valor1;
                cout<<"Ingrese El Valor #2 a Sumar : ";
                cin>>valor2;
                calculadora.setValor1(valor1);
                calculadora.setValor2(valor2);
                cout<<"Respuesta : "<<calculadora.Suma()<<endl;
                system("pause");
                system("cls");
                break;
            case 2:
                cout<<"Ingrese El Valor #1 a Restar : ";
                cin>>valor1;
                cout<<"Ingrese El Valor #2 a Restar : ";
                cin>>valor2;
                calculadora.setValor1(valor1);
                calculadora.setValor2(valor2);
                cout<<"Respuesta : "<<calculadora.Resta()<<endl;
                system("pause");
                system("cls");
                break;
            case 3:
                cout<<"Ingrese El Valor #1 a Multiplicar : ";
                cin>>valor1;
                cout<<"Ingrese El Valor #2 a Multiplicar : ";
                cin>>valor2;
                calculadora.setValor1(valor1);
                calculadora.setValor2(valor2);
                cout<<"Respuesta : "<<calculadora.Multiplicacion()<<endl;
                system("pause");
                system("cls");
                break;
            case 4:
                cout<<"Ingrese El Valor a Dividir : ";
                cin>>valor1;
                cout<<"Ingrese El Valor Entre el Cual va a Dividir : ";
                cin>>valor2;
                calculadora.setValor1(valor1);
                calculadora.setValor2(valor2);
                cout<<"Respuesta : "<<calculadora.Division()<<endl;
                system("pause");
                system("cls");
                break;
            case 5:
                cout<<"Ingrese El Valor a Hacer el Modulo : ";
                cin>>valor1;
                cout<<"Ingrese El Valor Por el Cual Va a Modular : ";
                cin>>valor2;
                calculadora.setValor1(valor1);
                calculadora.setValor2(valor2);
                cout<<"Respuesta : "<<calculadora.Modulo()<<endl;
                system("pause");
                system("cls");
                break;
        }
    }while(opcion != 6);

return 0;
}
