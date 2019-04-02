
#ifndef MENU_H_
#define MENU_H_
#include <iostream> 
#include <string>
#include "Laboratorio.h"
#include "Historial.h"


using namespace std ;

class Menu {
	private :
		int Opcion ; // Este Atributo es para utilizar solo en el menu 
					 // para que me vaya almacenando la opciones ingresadas
		
	public :
		Menu () ; 
		void MenuIngreso () ;
		void MenuParaEstudiantes () ;
		void MenuParaProfesores () ;
		void MenuParaArticulos () ;
		void MenuParaHstoriales () ;
		void MenuParaEstadosDeArticulo () ;
		~Menu () ;
};
#endif 
