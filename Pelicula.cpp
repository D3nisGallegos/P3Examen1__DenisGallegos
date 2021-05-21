#include "Pelicula.h"
#include <math.h>
#include <ctime>
#include <cmath>

Pelicula::Pelicula(){

}

Pelicula::Pelicula(string x, string y, string z){
	titulo = x; 
	director = y; 
	genero = z; 
	calcularvaloracion();
}

void Pelicula :: calcularvaloracion(){
	bool v = false; 
	int val = 0; 
	while (v == false){
		srand(time(NULL));
		int val = 1 + rand() % (4);
		if (val >= 1 && val <= 5){
			v = true; 
		}
	}
	valoracion = val; 
}

string Pelicula :: GETtitulo(){
	return titulo; 
}

string Pelicula :: GETdirector(){
	return director; 
}

string Pelicula :: GETgenero(){
	return genero; 
}

int Pelicula :: GETvaloracion(){
	return valoracion; 
}

void Pelicula :: SETtitulo(string x){
	titulo = x; 
}

void Pelicula :: SETdirector(string x){
	director = x; 
}

void Pelicula :: SETgenero(string x){
	genero = x; 
}

void Pelicula :: SETvaloracion(int x){
	valoracion = x; 
}

string Pelicula :: tostring(){
	string n = valoracion+"";
	return titulo+" | "+director+" | "+genero+" | "+n+""; 
}
Pelicula::~Pelicula(){

}