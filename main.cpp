#include <iostream>

using namespace std; 

int menu();

int main(int argc, char** argv) {
	/*
	int opcion = menu();
	while (opcion != 4){
		switch (opcion){
			case 1:
				{
				cout << "-------EJERCICIO 1------" <<endl; 
				int indice = 0;
				bool v = false; 
				while (v == false){
					cout << " Ingrese la cantidad de elementos del arreglo: (entero mayor a 0)" <<endl;
					cin >> indice;  
					if (indice <= 0){
						cout << "Indice ingresado invalido." <<endl; 
					}else {
						v = true; 
					}
				}//Fin del while.
				char* arreglo; 
				arreglo = new char[indice];
				char caracter;  
				for (int c =0; c < indice;c++){
					cout << "Ingrese el caracter para el elemento " << c << ":" <<endl; 
					cin >> caracter; 
					arreglo [c] = caracter; 
				}
				char* nuevo;
				nuevo = arreglodescomprimido(arreglo, indice);
				delete[] arreglo;
				delete [] nuevo; 
				cout << "-------FINAL EJERCICIO 1------" <<endl; 
				break; 
				}
			case 2:
				{
				cout << "-------EJERCICIO 2------" <<endl; 
				int filas = 0; 
				int columnas = 0; 
				int piedras =0;
				bool v = false; 
				while (v == false){
					cout << " Ingrese la cantidad de filas: (entero mayor a 0)" <<endl;
					cin >> filas;  
					cout << " Ingrese la cantidad de columnas: (entero mayor a 0)" <<endl;
					cin >> columnas; 
					cout << " Ingrese la cantidad de obstaculos: (entero mayor a 0)" <<endl;
					cin >> piedras; 
					if (filas <= 0 || columnas <= 0 || (piedras > (filas * columnas))){
						cout << "Valores ingresados invalidos." <<endl; 
					}else {
						v = true; 
					}
				}//Fin del while.
				char** matriz; 
				matriz = crearmatriz(filas, columnas, piedras);
				for(int i = 0; i<filas;i++){
					if(matriz[i]){
						delete[] matriz[i];
						matriz[i] = 0; 
					}
				}
				if( matriz != NULL ){
					delete[] matriz;
					matriz = 0;
				}
				if(matriz){
					delete[] matriz;
					matriz = 0;
				}
				cout << "-------FINAL EJERCICIO 2------" <<endl; 
				break; 
				}
			case 3: 
				{
				cout << "-------EJERCICIO 3------" <<endl; 
				int indice = 0;
				bool v = false; 
				while (v == false){
					cout << " Ingrese la cantidad de elementos del arreglo: (entero mayor a 0)" <<endl;
					cin >> indice;  
					if (indice <= 0){
						cout << "Indice ingresado invalido." <<endl; 
					}else {
						v = true; 
					}
				}//Fin del while.
				char* arreglo; 
				arreglo = new char[indice];
				char caracter;  
				for (int c =0; c < indice;c++){
					cout << "Ingrese el caracter para el elemento " << c << ":" <<endl; 
					cin >> caracter; 
					arreglo [c] = caracter; 
				}
				int filas = 0; 
				int columnas = 0; 
				int piedras =0;
				bool v2 = false; 
				while (v2 == false){
					cout << " Ingrese la cantidad de filas: (entero mayor a 0)" <<endl;
					cin >> filas;  
					cout << " Ingrese la cantidad de columnas: (entero mayor a 0)" <<endl;
					cin >> columnas; 
					cout << " Ingrese la cantidad de obstaculos: (entero mayor a 0)" <<endl;
					cin >> piedras; 
					if (filas <= 0 || columnas <= 0 || (piedras > (filas * columnas))){
						cout << "Valores ingresados invalidos." <<endl; 
					}else {
						v2 = true; 
					}
				}
				int fila = 0; 
				int columna = 0;
				char* arreglo2 = arreglodescomprimido(arreglo, indice);
				char** matriz = crearmatriz(filas, columnas, piedras);
				bool v3 = false; 
				while (v3 == false){
					cout << " Ingrese la fila para comenzar: (entero mayor a 0)" <<endl;
					cin >> fila;  
					cout << " Ingrese la columna para comenzar: (entero mayor a 0)" <<endl;
					cin >> columna; 
					if (filas <=  fila || columnas <= columna){
						cout << "Valores ingresados invalidos." <<endl; 
					}else {
						char elem = matriz [fila][columna]; 
						if (elem == '#'){
							cout << "Valores ingresados invalidos." <<endl; 
						}else{
							v3 = true; 
						}
					}
				}
				char** matrizsecuencia = secuencia(arreglo2, matriz, fila, columna, filas, columnas, indice);
				delete[] arreglo2; 
				for(int i = 0; i<filas;i++){
					if(matriz[i]){
						delete[] matriz[i];
						matriz[i] = 0; 
					}
				}
				if( matriz != NULL ){
					delete[] matriz;
					matriz = 0;
				}
				if(matriz){
					delete[] matriz;
					matriz = 0;
				}
				for(int i = 0; i<filas;i++){
					if(matrizsecuencia[i]){
						delete[] matrizsecuencia[i];
						matriz[i] = 0; 
					}
				}
				if( matrizsecuencia != NULL ){
					delete[] matrizsecuencia;
					matriz = 0;
				}
				if(matrizsecuencia){
					delete[] matrizsecuencia;
					matriz = 0;
				}
				cout << "-------FINAL EJERCICIO 3------" <<endl; 	
				break; 
				}
		}//Fin del switch.
		cout <<endl; 
		opcion = menu(); 
	}//Fin del while.
	*/ 
	return 0;
}

int menu(){
	int opcion = 0; 
	while (opcion != 4){
		cout << "--------MENU--------" <<endl;
		cout << " 1) Ejercicio 1. "<<endl;
		cout << " 2) Ejercicio 2. " <<endl; 
		cout << " 3) Ejercicio 3. " <<endl; 
		cout << " 4) Salir. " <<endl; 
		cout << "---------------------" <<endl; 
		cout << " Ingrese la opcion: " <<endl; 
		cin>> opcion; 
		if (opcion == 4){
			cout << "Ha elegido salir del sistema. " <<endl; 
		}else if (opcion > 0 && opcion < 4){
			break; 
		}
	}
	return opcion; 
}




