#include <iostream>
#include <stdlib.h>

using namespace std ; 
class Calculadora {
	private :
		float x, y ;
	
	public : 
		void setX (float x_) ;
		void setY  (float y_) ;
		float getX () ;
		float getY () ;
		float  Suma (float x_, float y_) ;
		float Resta (float x_, float y_) ;
		float Multiplicacion (float x_ , float y_) ;
		float Dividir (float x_ , float y_) ;
		float Modulo (float x_ , float y_) ;
};
