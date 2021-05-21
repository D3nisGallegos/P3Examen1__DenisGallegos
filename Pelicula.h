#ifndef PELICULA_H
#define PELICULA_H
#include <string>
#include <cstring>
#include <iostream>

using namespace std; 

class Pelicula {
	
	private: 
	string titulo; 
	string director; 
	string genero; 
	int valoracion; 
	
	public:
		Pelicula();
		Pelicula(string, string, string);
		string GETtitulo(); 
		string GETdirector();
		string GETgenero();
		int GETvaloracion();
		void calcularvaloracion();
		void SETtitulo(string ); 
		void SETdirector(string ); 
		void SETgenero(string );
		void SETvaloracion(int );  
		string tostring();
		~Pelicula();
	
};

#endif