#include "Menu.h"
#include <iostream>

using namespace std;

Menu::Menu(){
	numero = 0;
	clave = "";
	saldo = 0;
}

Menu::Menu(int numero,string clave,float saldo,Cuenta* C1){
	this ->numero=numero;
	this->clave=clave;
	this->saldo=saldo;
	this->C1=C1;
}

Menu::~Menu(){
}

void Menu::MenuRegistro(){
	cout<<"Ingrese Su Numero a Registrar: "; cin>> numero;
	cout<<"Ingrese Su Clave a Registrar: "; cin>> clave;
	cout<<"Ingresu Su Saldo a Registrar: "; cin>> saldo;
	C1 = new Cuenta (numero,clave,saldo);
}

bool Menu::MenuIngresar(){
	cout<<"Digite Su Numero de Cuenta: "; cin>>numero;
	cout<<"Digite Su Clave: "; cin>>clave;
	
	return C1->ingresar(numero,clave);
	
}

void Menu::MenuOpciones(){
	cout<<"(1) Retiro de Efectivo "<<endl;
	cout<<"(2) Consignacion de Efectivo "<<endl;
	cout<<"(3) Consultar Efectivo "<<endl;
	cout<<"(4) Actualizar Contraseña "<<endl;
	cout<<"(5) Salir ..."<<endl;

}


float Menu::MenuConsignacion(){
	float consignacion;
	cout<<"Digite Su Cantidad a Consignar: "; cin>> consignacion;
	cout<<"Su Saldo Total Mas Su Consignacion Es: "<<C1->consignacion(consignacion)<<endl;
}

string Menu::MenuCambiar(){
	string nueva;
	cout<<"Digite su contraseña nueva: "; cin>> nueva;
	C1->cambiar(nueva);
	cout<<"Su Contraseña Se A Cambiado correctamente ..."<<endl;
}

float Menu::MenuConsultar(){
	cout<<"Su Saldo Actual Se Encuentra Por los: "<<C1->consultar()<<endl;
}

bool Menu::MenuRetiro(){
	float valor;
	cout<<"Ingrese Su Valor a Retirar: "; cin>>valor;
	cout<<C1->retiro(valor)<<endl;
}
