#include <iostream>
#include "Series.h" 
#include "Episodios.h" 
#include "Videos.h"
#include <string>
using namespace std; 

Episodios::Episodios(){
  
}

Episodios::Episodios(int id, string nombre, double duracion, double calificacion, string genero, string titulo, int temporada, int episodio) : Series(id, nombre, duracion, calificacion, genero, titulo, temporada){
  
  this->episodio=episodio;
}
void Episodios::MostrarInformacion(){
cout<<"Num de episodio: "<<endl;
cin>>episodio;
Series::MostrarInformacion();

}
int Episodios::getEpisodio(){
  return episodio;
}
void Episodios::setEpisodio(int episodio){
  
  this->episodio=episodio;
}
void Episodios::Resumen(){
  Series::Resumen();
  cout<<episodio<<endl;
}



