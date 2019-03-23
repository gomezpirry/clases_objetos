/**
 * @file   ManejadorArchivo.h
 *
 * @date   22/03/2019
 * @author Augusto Gomez
 *
 */

#ifndef MANEJADORARCHIVO_H_
#define MANEJADORARCHIVO_H_

#include "Empleado.h"

#include <vector>
#include <fstream>
#include <string>
#include <iostream>
#include <iomanip>

using namespace std;

/*! \class ManejadorArchivo
 *  \brief Informacion de Empleados en archivos
 *
 *  Gestiona las operaciones de cargar y
 *  guardar en un archivo .csv para los empleados
 *
 */
class ManejadorArchivo {
private:
  /*! \brief Generar empleado basado en una linea de texto
   *
   *  \param[in]  linea Linea de texto con informacion de empleado
   *  \return     Empleado generado apartir de la linea
   */
  Empleado cargarLinea(string linea);

public:
  /*! \brief Guardar empleados en un archivo .csv
   *
   *  \param[in]  archivo   ruta del archivo para guardar empleados
   *  \param[in]  empleados vector de empleados
   *
   */
  void guardar(string archivo, vector<Empleado> &empleados);

  /*! \brief Cargar empleados en un archivo .csv
   *
   *  \param[in]  archivo   ruta del archivo para cargar empleados
   *  \param[out] empleados vector de empleados
   *
   */
  void cargar(string archivo, vector<Empleado> &empleados);
};

#endif /* MANEJADORARCHIVO_H_ */
