#ifndef VEHICULO_H
#define VEHICULO_H

#include <string>

using namespace std;

class Vehiculo {
public:
	Vehiculo();
	virtual ~Vehiculo();
	void setNumChasis(int numChasis);
	void setMarca(string marca);
	void setModelo(string Modelo);
	void setCilindraje(float cilidraje);
	void setPrecioBaseVenta(float precioBaseVenta);
	void setColorVehiculo(string colorVehiculo);
	void setVienenHerramientas(bool vienenHerramientas);
	int getNumChasis();
	string getMarca();
	string getModelo();
	float getCilindraje();
	float getPrecioBaseVenta();
	string getColorVehiculo();
	bool getVienenHerramientas();
	virtual void calcularPrecioVenta()=0;
	float getPrecioVenta();
	
protected:
	int numChasis;
	string marca;
	string modelo;
	float cilidraje;
	float precioBaseVenta;
	string colorVehiculo;
	bool vienenHerramientas;
	float precioVenta;
};

#endif

