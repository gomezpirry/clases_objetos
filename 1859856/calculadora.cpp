#include <iostream>
#include <conio.h>

using namespace std;
void mostrarPortada ();




/* run this program using the console pauser or add on your own getch, system ("pause") or input Loop */ 	 	

int main (int argc, char** argv)
{
   mostrarPortada (); //metodo que muestra la portada
   float num1,num2,result; //inicio declarando variables
   char opcion;
   
   
   cout<<"ingrese el primer valor a operar"<<endl;
   cin>>num1;//asingnando por pantalla el valor de la variable num1	
    cout<<"ingrese el segundo valor a operar"<<endl;
   cin>>num2;//asingnando por pantalla el valor de la variable num2
   
   cout<<"digite:"<<endl;
   cout<<"A)Sumar"<<endl;
   cout<<"B)Restar"<<endl;
   cout<<"C)Multiplicar"<<endl;
   cout<<"D)Dividir"<<endl;
   cin>>opcion;
   
   if(opcion=='A')
   {
   	result=num1+num2;
   	cout<<"el resultado es: "<<endl;
   	cout<<result;
   }
   if(opcion=='B')
   {
   	result=num1-num2;
   	cout<<"el resultado es: "<<endl;
   	cout<<result;
   }
   if(opcion=='C')
   {
   	result=num1*num2;
   	cout<<"el resultado es: "<<endl;
   	cout<<result;
   }
   if(opcion=='D')
   {
   	result=num1/num2;
   	cout<<"el resultado es: "<<endl;
   	cout<<result;
   }
   
   
   
   
   
   
   	
	
	
	return 0;
}
void mostrarPortada ()
{
	 cout<<"**************************************************"<<endl;
	 cout<<"*CLASE DE IPOO                                   *"<<endl;
	 cout<<"*PROGRAMADO POR JUAN CAMILO ECHEVERRY-201859856  *"<<endl;
	 cout<<"*PROGRAMA: CALCULADORA                           *"<<endl;
	 cout<<"*programa que solicita dos valores               *"<<endl;
	 cout<<"*y permite operarlos                             *"<<endl;
	 cout<<"**************************************************"<<endl; 	
}
