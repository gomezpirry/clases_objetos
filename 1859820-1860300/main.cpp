#include "Cuenta.h"
#include <iostream>
using namespace std ;

int main(int argc, char* argv[]){
	
	int opciones ;
	Cuenta cuenta1 ;
	int consignacion ;
    float retiro;
    int consultarSaldo;
	int	consultarNumeroCuenta;
	int consultarTransacciones;
	
	cout << "1.INGRESE EL NUMERO DE SU CUENTA  " << endl ;
	cout << "2. Salir " << endl ;
	
	cout << "Digite su opcion:" << endl ;
	cin  >> opciones ; 
	
	switch (opciones) {
		case 1 : {
			cout << "ingrese el numero de su cuenta: " ;cin >> consultarNumeroCuenta ;
			cuenta1.guardarNumeroDeCuenta(consultarNumeroCuenta) ;
			system("cls") ;
			
			// Menu principal 	
			cout << " \t BIENVENDIOS A SU CUENTA DE AHORRO" << endl;
			cout << "1. INGRESE SALDO A CONSIGNAR" << endl;
			cout << "2. MONTO A RETIRAR" << endl ;
			cout << "3. SALDO A CONSULTAR" << endl ;
			cout << "4. CONSULTAR NUMERO ID DE CUENTA" << endl;
			cout << "5. CONSULTARO NUMERO DE TRANSACCIONES" << endl ;
			cout << "ELIJA UNA OPCION " ; cin >> opciones ;
			
			switch (opciones){
				case 1: {
					cout << "ingrese la canditad que desea consignar: " ; cin >> consignacion ;
					cout << endl << cuenta1.ConsignacionSalida(consignacion) ;
					break;
				}
					
				case 2: {
					cout << "ingrese la cantidad que desea retirar: "; cin >> retiro;
					cuenta1.retiro(retiro);
					cout << cuenta1.consultaSaldo() << endl ;
					break;
				}
					
				case 3: {
					cout << "Su saldo actual es:" ;
					cout << cuenta1.consultaSaldo();
					break;
				} 
					
				case 4:{
					cout << "Su id de su cuenta es: " << endl ;
					cout << cuenta1.consultarNumeroCuenta();
					break;
				}		
				case 5:{
					cout << "Candtidad de transacciones que ha hecho:" ; 
					cout << cuenta1.consultarTransacciones(); 
					break;
				}	
			}
		} break ;
		
		case 2 : {
			cout << "Error" << endl ;
			break;
		}	 
	}
}


