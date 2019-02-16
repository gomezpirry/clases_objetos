/*
 * CDMusica.cpp
 *
 *  Created on: 15/02/2019
 *      Author: Usuario
 */

#include "CDMusica.h"

CDMusica::CDMusica(string titulo1, vector<string> listaCanciones, int serie,
		int year) {
	this->titulo = titulo;
	this->listaCanciones = listaCanciones;
	this->serie = serie;
	this->year = year;
}

CDMusica::~CDMusica() {
	cout << "me detrui\n";
}

void CDMusica::reproducir(int cancion) {
	if(cancion > listaCanciones.size()){
		cout << "cancion no disponible\n";
	} else {
		cancionActual = cancion;
	}
}


string CDMusica::obtenerCancionActual() {
	return listaCanciones[cancionActual - 1];
}

vector<string> CDMusica::obtenerListacanciones() {
	return listaCanciones;
}
