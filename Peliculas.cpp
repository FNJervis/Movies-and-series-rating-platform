#include <iostream>
#include "Peliculas.h" 
#include "Videos.h"
#include <string>
using namespace std; 

Peliculas::Peliculas(){
  
}

Peliculas::Peliculas(int id, string nombre, double duracion, double calificacion, string genero):Videos(id, nombre, duracion, calificacion, genero){
  
}
void Peliculas::MostrarInformacion(){
  
  Videos::MostrarInformacion();
 
}
void Peliculas::Resumen(){
   Videos::Resumen();
}