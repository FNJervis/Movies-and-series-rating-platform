#include "Videos.h"
#include <string>
using namespace std;
#include <iostream>

Videos::Videos(){
  id = 0;
  nombre = "";
  duracion = 0;
  calificacion = 0;
  genero = "";
  
}
Videos::Videos(int, string, double, double, string){
  this->id=id;
  this->nombre=nombre;
  this->duracion=duracion;
  this->calificacion=calificacion;
  this->genero=genero;
}
  
int Videos::GetId(){
  return id;
}
string  Videos::getNombre(){
  return nombre;
}
double  Videos::getDuracion(){
  return duracion;
}
double Videos::getCalificacion(){
  
  cout<<"¿Cuál sería tu calificación?"<<endl;
  cin>>calificacion;
  cout<<"Gracias por su aportación"<<endl;
  return calificacion;
}
void  Videos::setCalificacion(){
  this->calificacion=calificacion;
}
string Videos::getGenero(){
  return genero;
}
void Videos::MostrarInformacion(){

  cout<<"Inserta el ID:"<<endl;
  cin>>id;
  cout<<"Inserta el nombre:"<<endl;
  cin>>nombre;
  cout<<"Inserta la duración:"<<endl;
  cin>>duracion;
  cout<<"Inserta el genero:"<<endl;
  cin>>genero;
  getCalificacion();
  

}
void Videos::Resumen(){
  printf("\n");
  cout<<"En resumen:";
  printf("\n");
  cout<<id<<endl;
  cout<<nombre<<endl;
  cout<<duracion<<endl;
  cout<<genero<<endl;
  cout<<calificacion<<endl;
  printf("\n");
}