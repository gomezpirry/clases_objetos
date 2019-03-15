#include<iostream>

#include <string>

using namespace std;


class Articulo{
private:
	int codigo;
	string tipo;
	string estado;
	int valor;
	int fechaAsignacion;
	int fechaCreacion;
	
public:
	Articulo();
	~Articulo();
	
	int getCodigo(){
		return codigo;
	}
	
	void setCodigo(int codigo){
		this->codigo = codigo;
	}
	
	string getTipo(){
		return tipo;
	}
	
	void setTipo(string tipo){
		this->tipo= tipo;
	}
	
	string getEstado(){
		return estado;
	}
	
	void setEstado(string estado){
		this->estado = estado;
	}
	
	int getValor(){
		return valor;
	}
	
	void setValor(int valor){
		this->valor = valor;
	}
	
	void Depreciacion();
		
	
	void Cambioestado();
		
	void GuardarArchivoArticulos;
		
		
	};

	
	

	
