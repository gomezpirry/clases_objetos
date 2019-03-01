#include <cstdlib>
#include <iostream>
#include <fstream>
#include <windows.h>
#include <conio.h>
#include <string.h>
#include <stdio.h>
#include <cstdlib>
#include <string>

#include "Cuenta.h"



using namespace std;

void finalizar_programa();
void borrar_pantalla();
int main(){

	cuenta cuenta1 (1234, "juan", 0);
	cuenta1.consignacion(0);
	cuenta1.consignacion(0);
	//cuenta1.numero();
	//cuenta1.contrasena();

		
        int numero;
        string contrasena;
        float consignacion;
		int opcion_menu;
		int contador = 0;
		bool retirar;
		bool ingresar = false;
		string nueva;




		cout << "\t\t\t\t\tBIENVENIDO A NUESTRO MENU" << endl;
		cout << "\t\t\t\t\t-------------------------" << endl;


		
		
		
		cout << "\nDigite su Numero de Usuario:  ";//INGRESAR COMO USUARIO
		cin >> numero;

		 char caracter;

		        cout << "\nDigite su Contrasena: ";
		        caracter = getch();

		        contrasena = "";

		        while (caracter != 13) {// el 13 en numero aski es tecla ENTER

		        if (caracter != 8) {//el 8 en numero aski es tecla borrar
		        	contrasena.push_back(caracter);
		            cout << "*";

		        } else {
		            if (contrasena.length() > 0) {
		                cout << "\b \b";
		                contrasena = contrasena.substr(0, contrasena.length() - 1);
		            }
		        }

		        caracter = getch();
		        }

		        //comparcion de numeros y claves!!

		        if (cuenta1.getnumero() == numero && cuenta1.getcontrasena() == contrasena) {
		            ingresar = true;
		        } else {
		            cout << "\n\n\tEl usuario y/o password son incorrectos\n\n" << endl;
		            system("cls");
		            main();
		            Sleep(2500);
		            //contador++;
		            
		        }

			 if (ingresar == false && contador > 3) {
		       cout << "\tUsted no pudo ingresar al sistema\n\n" << endl;
		        
		
              
		    } else {
		    	system("cls");
		        cout << "\n\t\t\t\t\tBIENVENIDO AL SISTEMA" << endl;
		        cout << "\t\t\t\t\t---------------------" << endl;
		        cout << "1. Consultar" << endl;
		        cout << "2. Consignar" << endl;
				cout << "3. Retirar" << endl;
				cout << "4. Cambiar clave" << endl;
				cout << "5. Salir del Programa." << endl;
				cout << "-----------------------\n\n" << endl;
				cout << "Introduzca Opcion:  ";
				cin >> opcion_menu;
				
		    }
		
		
		    
		    //definimos las opciones de nuestro menu
		 
		  
		   switch(opcion_menu)
		{
		case 1:
			system("cls");
			cout << "\n";
			cout <<"Dinero total en su cuenta es:  ";
			cout << cuenta1.consultar() << endl;
			cout << "\n";
			cout << "\t\t\t\tingresar nuevamente una opcion" << endl;
			cout << "1. Consultar" << endl;
		    cout << "2. Consignar" << endl;
			cout << "3. Retirar" << endl;
			cout << "4. Cambiar clave" << endl;
			cout << "5. Salir del Programa." << endl;
			cout << "-----------------------\n\n" << endl;
			cout << "Introduzca Opcion:  ";
			cin >> opcion_menu;	
			break;
		
		case 2:
			cout <<"\n";
			cout <<"Dinero total que desea consignar:  ";
			cin >> consignacion;
			cout <<"\n";
			if (consignacion < 0 ){
				cout << "\t\t\t\t\tEste valor no es valido!!!";
			}else {
				system("cls");
				cout << "\t\t\t\t\tconsigancion exitosa!!";
				cout << "\t\t\t\t\t----------------------\n\n";
				cout << "1. Consultar" << endl;
		        cout << "2. Consignar" << endl;
				cout << "3. Retirar" << endl;
				cout << "4. Cambiar clave" << endl;
				cout << "5. Salir del Programa." << endl;
				cout << "-----------------------\n\n" << endl;
				cout << "Introduzca Opcion:  ";
				cin >> opcion_menu;	
				
					
			}
				
			break;
		case 3:
			cout << "\n";
			cout << "Cuanto dinero desea retirar:  ";
			cin >> retirar;
			if(cuenta1.retiro(0) == retirar ){
			
				retirar = true;
		
				
			}else{
				cout << "\t\t\t\t\tFondos insuficientes\n";
				cout << "\t\t\t\t\tPorfavor digite nuevamente una opcion:\n";
				cout << "1. Consultar" << endl;
		        cout << "2. Consignar" << endl;
				cout << "3. Retirar" << endl;
				cout << "4. Cambiar clave" << endl;
				cout << "5. Salir del Programa." << endl;
				cout << "-----------------------\n\n" << endl;
				cout << "Introduzca Opcion:  ";
				cin >> opcion_menu;	
			}
	    	break;
	    	
	    case 4:
			cout << "Ingrese su contrasena actual:  " << endl;
			cin >> contrasena;
			if (contrasena != cuenta1.contrasena){
			
			cout<<"No se puede realizar el cambio las contrasenas son iguales"<<endl;
	    }else{
	    	cout << "\nIngrese nueva contrasena: ";
	    	cin >> nueva;
	    	cuenta1.getcontrasena() = nueva;
	    	cout << "Cambio de contraseña Exitoso!!"<<endl;
	    	cout << "contrasena actual es: " << nueva;
		}
	    break;
	    default:
	    	cout << "opcion incorrecta";
		}
	while(opcion_menu != 5);
	      system("pause");
	      return opcion_menu;

		    

		
	return 0;		 
	
}
