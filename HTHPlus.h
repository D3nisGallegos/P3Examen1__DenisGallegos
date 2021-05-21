#ifndef HTHPLUS_H
#define HTHPLUS_H
#include <vector>
#include "Pelicula.h"

class HTHPlus{
	
	private:
	vector <Pelicula* > peliculas; 
	
	public:
		HTHPlus();
		void imprimirtodas();
		void imprimirporgenero(); 
		void imprimirporstring(string );
		void imprimirporvaloracion();
		void agregarpeli(Pelicula* ); 
		void eliminarpeli(int );
		void modificarpeli(int, int, string);
		vector <Pelicula* > GETpeliculas();
		~HTHPlus();
};

#endif