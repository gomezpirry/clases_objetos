#ifndef CUENTA_H_
#define CUENTA_H_
#include <string>
#include <iostream>


using namespace std;


class Cuenta {

private:

	int numero;
	string clave;
	float saldo;

public:
	
	Cuenta();
	Cuenta(int numero, string clave, float saldo);
	~Cuenta();
	
	int getNumero();
	void setNumero(int numero);
	
	string getClave();
	 
	void setClave(string clave);

  
	float getSaldo();
  void setSaldo(float saldo);
  
  bool retiro (float valor);
	void consignacion(float valor);
	float consultar();
	bool ingresar(int numero, string clave);
	void cambiarClave(string nueva);


};

#endif /* CUENTA_H_ */
