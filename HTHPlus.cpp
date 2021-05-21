#include "HTHPlus.h"
#include <string>
#include <cstring>
#include <iostream>

using namespace std; 

HTHPlus::HTHPlus(){

}

void HTHPlus :: imprimirtodas(){
	for (int c = 0; c < peliculas.size();c++){
		Pelicula* peli = peliculas [c];
		cout << "[" << c << "] " << peli->tostring() << "/5" << endl; 
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
	for (int c = 5; c <= 0;c--){
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
		Pelicula* peli = peliculas [c];
		string tit = peli->GETtitulo()+""; 
		if (tit.find(buscar) == true){
			cout << peli->tostring() << "/5" <<endl; 
		}
	}
}

void HTHPlus :: agregarpeli(Pelicula* pelicula){
	peliculas.push_back(pelicula);
	
}

void HTHPlus :: eliminarpeli(int indice){
	for (int c = 0; c < peliculas.size();c++){
		Pelicula* peli = peliculas [c];
		if (c == indice){
			delete peli; 
			peliculas.erase(peliculas.begin()+indice - 1);
		}
	}
}

void HTHPlus :: modificarpeli(int indice, int opcion, string x){
	Pelicula* peli = peliculas.at(indice);
	switch (opcion){
		case 1:
			{
			peli->SETtitulo(x);
			break;
			}
		case 2:
			{
			peli->SETdirector(x);
			break;
			}
		case 3:
			{
			peli->SETgenero(x);
			break;
			}
		case 4:
			{
			peli->calcularvaloracion();
			cout << "Valoracion nueva establecida. " << endl;
			break;
			}
	}//Fin del switch de opciones modificar.
}  

vector <Pelicula* > HTHPlus :: GETpeliculas(){
	return peliculas; 
}

HTHPlus::~HTHPlus(){
	for (int c =0; c < peliculas.size();c++){
		delete peliculas [c];
	}
}