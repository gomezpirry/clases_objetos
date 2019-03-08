#ifndef __CUENTA_H__
#define __CUENTA_H__

class Cuenta {
	
	private:
		int		numeroCuenta;
		float 	fondos;
		int   	numeroTransacciones;
	public:
		Cuenta();		
		void 	consignacion(float cantidad);
		bool 	retiro(float cantidad);
		int ConsignacionSalida (int consignacion) ;
		float  	consultaSaldo();
		int		consultarNumeroCuenta();
		int     consultarTransacciones();
		void guardarNumeroDeCuenta (int Numero) ;
};


#endif
