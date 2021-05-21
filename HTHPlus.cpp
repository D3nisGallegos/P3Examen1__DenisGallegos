#include "HTHPlus.h"
#include <string>
#include <cstring>

HTHPlus::HTHPlus(){

}

void HTHPlus :: imprimirtodas(){
	for (int c = 0; c < peliculas.size();c++){
		Pelicula* peli = peliculas [c];
		cout << "[" << c << "] " << peli->GETtitulo() << " | " << peli->GETdirector() << " | " << peli->GETgenero() << " | " << peli->GETvaloracion() << "/5" <<endl; 
	}
}

void HTHPlus :: imprimirporgenero(){
	string* generos; 
	generos = new string [peliculas.size()];
	int indice = 0; 
	for (int c = 0; c < peliculas.size();c++){
		Pelicula* peli = peliculas [c];
		bool v = false; 
		for (int j = 0; j < indice;j++){
			if (peli->GETgenero() == generos [j]){
				v = true; 
			}
		}
		if (v == false){
			generos [indice] = peli->GETgenero();	
			indice++;
		}
	}
	for (int c = 0; c < indice;c++){
		cout << "[" << generos [c] << "]" <<endl; 
		for (int j = 0; j < peliculas.size();j++){
			Pelicula* peli = peliculas [j];
			if (peli->GETgenero() == generos [c]){
				cout << peli->tostring() << "/5" <<endl;
			}
		}
	}
}

void HTHPlus :: imprimirporvaloracion(){
	for (int c = 0; c < 6;c++){
		cout << "[valoracion: " << c <<"]"<<endl;  
		for (int j = 0; j < peliculas.size();j++){
			Pelicula* peli = peliculas [j];
			if (peli->GETvaloracion() == c){
				cout << peli->tostring()<< "/5"<<endl;
			}
		}
	}
}

void HTHPlus :: imprimirporstring(string buscar){
	for (int c = 0; c < 6;c++){
		
	}
}

HTHPlus::~HTHPlus(){

}