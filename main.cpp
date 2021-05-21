#include <iostream>
#include "Pelicula.h"
#include "HTHPlus.h"
#include <string>
#include <cstring>
#include <vector>

using namespace std; 

int menu();

int main(int argc, char** argv) {
	HTHPlus* cine = new HTHPlus();
	int opcion = menu();
	while (opcion != 8){
		switch (opcion){
			case 1:
				{
				string titulo = "", director = "", genero = ""; 
				cout << "-------AGREGAR------" <<endl; 
				cout << "Ingrese el titulo de la pelicula:" <<endl; 
				getline(cin, titulo);
				cout << "Ingrese el director de la pelicula:" <<endl; 
				getline(cin, director);
				cout << "Ingrese el genero de la pelicula:" <<endl; 
				getline(cin, genero);
				Pelicula* peli = new Pelicula(titulo, director, genero);
				cine->agregarpeli(peli);
				cout << "-------FINAL AGREGAR------" <<endl; 
				break; 
				}
			case 2:
				{
				cout << "-------MODIFICAR------" <<endl; 
				cout << "-------TODAS LAS PELICULAS--------" <<endl;
				cine->imprimirtodas();
				bool v = false; 
				int indice = 0; 
				while (v == false){
					cout << "---------------------" <<endl; 
					cout << " Ingrese el indice de la pelicula a modificar: " <<endl;
					cin >> indice;
					cin.ignore(); 
					if (indice < 0 || indice >= cine->GETpeliculas().size()){
						
					}else {
						v = true; 
					}
				}
				Pelicula* peli = cine->GETpeliculas().at(indice);
				cout << "Ha decidido modificar la pelicula: " << peli->tostring() << "/5" <<endl;
				bool v2 = false; 
				int opcion2 = 0; 
				while(v2 == false){
					cout << "--------Modificar--------" <<endl;
					cout << " 1) Modificar titulo. "<<endl;
					cout << " 2) Modificar director." <<endl; 
					cout << " 3) Modificar genero." <<endl; 
					cout << " 4) Modificar valoracion." <<endl;
					cout << " 5) Salir." <<endl;
					cout << "---------------------" <<endl; 
					cout << " Ingrese la opcion: " <<endl; 
					cin>> opcion2; 
					cin.ignore();
					if (opcion2 <= 0 || opcion2 >= 6){
						
					}else {
						v2 = true; 
					}
				}//Fin del while menu modificar.
				string titulo = "";
				if (opcion2 <= 3){
					cout << "Ingrese el nuevo nombre:" <<endl; 
					getline(cin, titulo);
					cine->modificarpeli(indice, opcion2, titulo);
				}else if (opcion2 == 4){
					cine->modificarpeli(indice, opcion2, "");
				}
				cout << "-------FINAL MODIFICAR------" <<endl; 
				break; 
				}
			case 3: 
				{
				cout << "-------ELIMINAR------" <<endl; 
				int opcion2 = 0; 
				cout << "-------TODAS LAS PELICULAS--------" <<endl;
				cine->imprimirtodas();
				bool v = false; 
				int indice = 0; 
				while (v == false){
					cout << "---------------------" <<endl; 
					cout << " Ingrese el indice de la pelicula a eliminar: " <<endl;
					cin >> indice; 
					cin.ignore();
					if (indice < 0 || indice >= cine->GETpeliculas().size()){
						
					}else {
						v = true; 
					}
				}
				cine->eliminarpeli(indice); 
				cout << "-------FINAL ELIMINAR------" <<endl; 	
				break; 
				}
			case 4:
				{
				cout << "-------IMPRIMIR POR GENERO------" <<endl; 	
				cine->imprimirporgenero();
				cout << "-------FINAL IMPRIMIR POR GENERO------" <<endl; 	
				break; 
				}
			case 5:
				{
				string n = ""; 
				cout << "-------IMPRIMIR POR BUSQUEDA------" <<endl; 	
				cout << "Ingrese la cadena para buscar: " <<endl; 
				getline(cin, n);
				cine->imprimirporstring(n);
				cout << "-------FINAL POR BUSQUEDA------" <<endl; 	
				break; 
				}
			case 6:
				{
				cout << "-------IMPRIMIR POR VALORACION------" <<endl; 	
				cine->imprimirporvaloracion();
				cout << "-------FINAL IMPRIMIR POR VALORACION------" <<endl; 	
				break; 
				}
			case 7:
				{
				cout << "-------IMPRIMIR TODAS------" <<endl; 	
				cine->imprimirtodas();
				cout << "-------FINAL IMPRIMIR TODAS------" <<endl; 	
				break; 
				}
		}//Fin del switch.
		cout <<endl; 
		opcion = menu(); 
	}//Fin del while.
	delete cine;
	return 0;
}

int menu(){
	int opcion = 0; 
	while (opcion != 8){
		cout << "--------MENU--------" <<endl;
		cout << " 1) Agregar pelicula. "<<endl;
		cout << " 2) Modificar pelicula. " <<endl; 
		cout << " 3) Eliminar pelicula. " <<endl; 
		cout << " 4) Imprimir por genero." <<endl; 
		cout << " 5) Imprimir por busqueda." <<endl; 
		cout << " 6) Imprimir por valoracion." <<endl;
		cout << " 7) Imprimir todas." <<endl;  
		cout << " 8) Salir." <<endl; 
		cout << "---------------------" <<endl; 
		cout << " Ingrese la opcion: " <<endl; 
		cin>> opcion; 
		cin.ignore();
		if (opcion == 8){
			cout << "Ha elegido salir del sistema. " <<endl; 
		}else if (opcion > 0 && opcion <= 7){
			break; 
		}
	}
	return opcion; 
}




