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

void HTHPlus :: modificarpeli(int indice){
	int opcion = 0; 
	Pelicula* peli = peliculas [indice];
	while(opcion != 5){
		cout << "--------Modificar--------" <<endl;
		cout << " 1) Modificar titulo. "<<endl;
		cout << " 2) Modificar director." <<endl; 
		cout << " 3) Modificar genero." <<endl; 
		cout << " 4) Modificar valoracion." <<endl;
		cout << " 5) Salir." <<endl;
		cout << "---------------------" <<endl; 
		cout << " Ingrese la opcion: " <<endl; 
		cin>> opcion; 
		switch (opcion){
			case 1:
				{
				string titulo = ""; 
				cout << "Ingrese el nuevo titulo: " <<endl; 
				getline(titulo, cin.ignore());
				peli->SETtitulo(titulo);
				break; 
				}
			case 2: 
				{
				string titulo = ""; 
				cout << "Ingrese el nuevo director: " <<endl; 
				getline(titulo, cin.ignore());
				peli->SETdirector(titulo);
				break; 
				}
			case 3:
				{
				string titulo = ""; 
				cout << "Ingrese el nuevo genero: " <<endl; 
				getline(titulo, cin.ignore());
				peli->SETgenero(titulo);
				break; 
				}
			case 4: 
				{
				peli->calcularvaloracion();
				cout << "Valoracion nueva establecida. " << endl;
				break;
				}
		}//Fin del switch de opciones modificar.
	}//Fin del while menu modificar.
}  

HTHPlus::~HTHPlus(){

}