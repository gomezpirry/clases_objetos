
#ifndef FECHA_H_
#define FECHA_H_

using namespace std ;

class Fecha {
	private :
		int Dia ;
		int Mes ;
		int Anio ;
	
	public :
		Fecha () ;
		Fecha (int Dia, int Mes, int Anio) ;
		void setDia (int Dia) ;
		void setMes (int Mes) ;
		void setAnio (int Anio) ;
		int getDia () ;
		int getMes () ;
		int getAnio () ;
		bool ValidarFormatoDeFecha (int Dia, int Mes, int Anio) ;
		void RegistrarFecha (int Dia, int Mes, int Anio) ;
		~Fecha () ;
};
#endif
