#include <iostream>
#include "Series.h" 
#include "Videos.h"
#include <string>
using namespace std; 

Series::Series(){
  titulo = "";
  temporada = 0;
}

Series::Series(int id, string nombre, double duracion, double calificacion, string genero, string titulo, int temporada):Videos(id, nombre, duracion, calificacion, genero){
  
  this->titulo=titulo;
  this->temporada=temporada;
  
}
  
string Series::getTitulo(){
  return titulo;
}
string Series::setTitulo(string){
  this->titulo=titulo;
}
int Series::getTemporada(){
  return temporada;
}
int Series::setTemporada(int){
  this->temporada=temporada;
}
void Series::MostrarInformacion(){
  
  cout<<"Título de la serie: "<<endl;
  cin>>titulo;
  cout<<"Temporada de la serie: "<<endl;
  cin>>temporada;
  Videos::MostrarInformacion();
  
  
   
}
void Series::Resumen(){
   Videos::Resumen();
   cout<<"Sin olvidarnos de:"<<endl;
   cout<<titulo<<endl;
   cout<<temporada<<endl;

}

