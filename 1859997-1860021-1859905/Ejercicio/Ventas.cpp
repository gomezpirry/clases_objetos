#include "Ventas.h"
#include <stdlib.h>

Ventas::Ventas() {
	// TODO Auto-generated constructor stub

}


Ventas::~Ventas() {
	// TODO Auto-generated destructor stub
}

void Ventas::cargarLinea(string linea) {
  vector<string> palabras;
  string temp = "";
  for(size_t i = 0; i < linea.size(); i++){
    if(linea[i] == ';') {
      palabras.push_back(temp);
      temp = "";
    } else {
      temp += linea[i];
    }
  }

}

void Ventas::guardarVendedor(string archivo, vector<Vendedor> &vendedores) {
  ofstream file;
  file.open(archivo.c_str(), ios::in | ios::trunc);
  for(Vendedor vendedor : vendedores){
    file << vendedor.getNombre() << ";";
    file << vendedor.getApellido() << ";";
    file << vendedor.getCedula() << ";";
    file << vendedor.getVehiculosVendidos() << ";";
    file << vendedor.getMontoVendido() << ";";
    
    file << fixed << setprecision(2) << vendedir.() << ";";
    file << "\n";
  }
  for()
  
  file.close();
}

	
	
	
vector Ventas::aleatorio(){
	
	vector <int> aleatorio(5);
	int max= 2000;
	int min= 1000;
	for(int = 0; i < aleatorio.size(); i++){
		aleatorio.push_back(valor);
		}
	for (int valor : aleatorio){
		cout << "valor: " << valor << "\n";
	}
	
}
