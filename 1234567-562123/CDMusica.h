/*
 * CDMusica.h
 *
 *  Created on: 15/02/2019
 *      Author: Usuario
 */

#ifndef CDMUSICA_H_
#define CDMUSICA_H_

#include <vector>
#include <string>
#include <iostream>

using namespace std;


class CDMusica {
private:
	string 		   titulo;
	vector<string> listaCanciones;
	int			   serie;
	int			   year;
	int 		   cancionActual = 1;

public:
	CDMusica(string titulo, vector<string> listaCanciones, int serie,
			int year);
	~CDMusica();

	void 			reproducir(int cancion);
	string  		obtenerCancionActual();
	vector<string>  obtenerListacanciones();

	int getCancionActual()  {
		return cancionActual;
	}

	void setCancionActual(int cancionActual) {
		this->cancionActual = cancionActual;
	}

	vector<string> getListaCanciones() const {
		return listaCanciones;
	}

	void setListaCanciones(vector<string> listaCanciones) {
		this->listaCanciones = listaCanciones;
	}

	int getSerie() {
		return serie;
	}

	void setSerie(int serie) {
		this->serie = serie;
	}

	string getTitulo()  {
		return titulo;
	}

	void setTitulo(string titulo) {
		this->titulo = titulo;
	}

	int getYear() {
		return year;
	}

	void setYear(int year) {
		this->year = year;
	}
};

#endif /* CDMUSICA_H_ */
