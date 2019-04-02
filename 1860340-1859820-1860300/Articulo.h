
#ifndef ARTICULO_H_
#define ARTICULO_H_
#include <iostream>
#include <string>
#include "Fecha.h"


using namespace std ; 

class Articulo : public Fecha {
	private :
		int TipoDeArticulo[3] ; // Donde 1= Tipo Mueble 
										  // Donde 2= Equipo de comuputo
										  // Donde 3= Elementos de prestamo
		string IDNombre ;
		string IDMarca ;
		int CantidadDeTipoDeArticulo ;
		int CodigoArticulo ;
		int ValorArticuloInicial ;
		int ValorActualArticulo ;
		float DespreciacionAnual ;
		bool EstadoArticuloDeActivo ;
		bool EstadoDeLimiteDeArticulos ;
		bool EstadoDeAsignadoAProfesor ;
		Fecha* FechaPrestamo ;
		Fecha* FechaInicial ;
		
	public :
		Articulo () ;
		Articulo (int Dia, int Mes, int Anio, int TipoDeArticulo[3], string IDNombre, string IDMarca,
				  int CodigoArticulo, int ValorArticuloInicial, int ValorActualArticulo, float DespreciacionAnual, bool EstadoArticulo) ;
		void setTipoDeArticulo (int TipoDeArticulo) ;
		void setIDNombre (string IDNombre) ;
		void setIDMarca (string IDMarca) ;
		void setCodigoArticulo (int CodigoArticulo) ;
		void setValorArticuloInicial (int ValorArticuloInicial) ;
		void setValorActualArticulo (int ValorActualArticulo) ;
		void setEstadoArticuloDeActivo (bool EstadoArticulo) ;
		void setEstadoDeAsignadoAProfesor (bool EstadoDeAsignadoAProfesor) ;
		int getTipoDeArticulo () ;
		string getIDNombre () ;
		string getIDMarca () ;
		int getCodigoArticulo () ;
		int getValorArticuloInicial () ;
		int getValorActualArticulo () ;
		float getDespreciacionAnual () ;
		bool getEstadoArticuloDeActivo () ;
		bool getEstadoDeAsignadoAProfesor () ;
		Articulo* CrearDatosDeArticulo (Articulo &Articulo) ;
		vector <Articulo>* ArticulosPrestados (Fecha &FechaIncio, Fecha &FechaFinal) ; 
		~Articulo () ;
};
#endif
