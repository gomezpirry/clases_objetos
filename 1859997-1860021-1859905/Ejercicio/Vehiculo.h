#ifndef VEHICULO_H_
#define VEHICULO_H_

#include <string>

using namespace std;

enum Marca {
	BMW,
	Ferrari,
	Porshce,
};

class Vehiculo {
protected:
	int chasis;
	int modelo;
	int cilindraje;
	float precio; 
	Marca marca;

public:
	Vehiculo();
	Vehiculo(int chasis, int modelo,int cilindraje, float precio, Marca marca);
	~Vehiculo();
	
	virtual float valor()=0;
	
	float getPrecio();
	float setPrecio(float precio);
	
	int getCilindraje();
	int setCilindraje(int cilindraje);
	
	int getchasis();
	int setChasis(int chasis);
	
	int getModelo();
	int setModelo(int modelo);
	
	
	
};

#endif /* VEHICULO_H_ */

