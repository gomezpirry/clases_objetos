#ifndef VENTAS_H_
#define VENTAS_H_

#include <vector>
#include <fstream>
#include <string>
#include <iostream>
#include <iomanip>

using namespace std;


class Ventas {

public:
  
  void guardar(string archivo, vector<vendedor> &ventas);
  
  vector aleatorio();
 
  
};

#endif /* VENTAS_H_ */

