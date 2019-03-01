#include <iostream>
#include "Cuenta.h"
#include <string>
#include <conio.h>
#include <stdlib.h>
#include <stdlib.h>

using namespace std;

int main() {
	
  Cuenta cuenta1 (1234,"bbg",200);
	
	
//___________MENU______________

 int opciones;
 bool ingresar = false;
 bool exit = false ;
 
 int numero;
 string clave;
 float  valor ;
 string nueva;
 
 cout << "\n \t MENU" ;
 cout << "\n \t";
 cout << " \n Ingrese numero cuenta : " ;
 cin >> numero ;

 
 cout << "\n Ingrese clave : " ;
 cin >> clave;
  
      if (cuenta1.getnumero() == numero && cuenta1.getclave() == clave){
 	       ingresar = true;
 	       
      cout << "\n 1 -> Retiro "<< endl;
      cout << "\n 2 -> Consignar"<< endl;
      cout << "\n 3 -> Consultar"<< endl;
      cout << "\n 4 -> Cambiar Clave"<< endl;
      cout << "\n \t Ingrese Opcion : ";
      cin >> opciones;
 
     switch (opciones) {
	   
	    case 1: 
		    cout << "\n Saldo Actual : " << cuenta1.saldo ;
		    cout << " \n Cantidad a retirar : " ;
		    cin >> valor;
		    if(valor > cuenta1.saldo){
		      cout << "Fondo insuficiente";
		    }else {
		          cuenta1.saldo = cuenta1.getsaldo() -  valor;
		          cout << "Saldo Total : " << cuenta1.saldo << "\n";
		          cout << "Retiro exitoso " ;
		          } 
		  break;
		   
		case 2:
		  cout << " Saldo Actual :" << cuenta1.saldo;
		  cout << "\n Cantidad a Consignar : ";
		  cin >> valor;
		  cuenta1.saldo = cuenta1.getsaldo() + valor;
		  cout << "Saldo Total: " << cuenta1.saldo << "\n";
	    cout << "Transaccion exitosa " ;
		break;
	
		case 3:
	     cout << " Su saldo es :  " << cuenta1.saldo << "\n" ;
	     cout << " Su numero de cuenta es :  " << cuenta1.numero << "\n";
	     cout << " Su calve es :  " << cuenta1.clave << "\n";
		  break;
	   
	  case 4 :
	     cout << " Digite Clave Actual  :  " ;
	     cin >> clave  ;
	     if (clave != cuenta1.clave){
	       cout << "ERROR";
	     } else {
	     cout << " \n Clave nueva : " ;
	     cin >> nueva ;
	     cuenta1.getclave()= nueva;
	     cout << " \n Su Clave nueva es : " << nueva ;
	    }
	     break;
	     
	     default : 
	            cout << "Opcion No Valida " ;
				exit = true ;
		system ("cls");		 
    	main();
       break;
     }
 }else {
 	        cout << " \n ERROR cuenta o clave incorrectas ";
 	        cin.get();
           }
	   
	   
	   return 0;
}
     
   
 

 
	

