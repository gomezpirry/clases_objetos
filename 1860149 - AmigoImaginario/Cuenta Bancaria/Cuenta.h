#ifndef Cuenta_h
#define Cuenta_h
#include <string>

using namespace std;

class Cuenta{
private:
	int numero;
	string clave;
	float saldo;
public:
	Cuenta();
	Cuenta(int numero,string clave,float saldo);
	~Cuenta();
	bool retiro(float valor);
	float consignacion(float valor);
	float consultar();
	bool ingresar(int ID,string clave1);
	string cambiar(string nueva);
};
#endif // Cuenta_h

