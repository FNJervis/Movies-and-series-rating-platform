#include <iostream>
using namespace std;
#include "Videos.h"
#include "Series.h"
#include "Peliculas.h"
#include "Episodios.h"

int ch;
int cont = 0;

Videos v;
Peliculas p;
Episodios e;


int main() {
while (cont == 0){
  
  cout<<"Bienvenidos a Netflix!"<<endl;
 cout<<"Selecciona la opción que gustes: "<<endl;
 cout<<"1: Calificar video"<<endl;
 cout<<"2: Calificar Película"<<endl;
 cout<<"3: Calificar Episodio"<<endl;
 cout<<"4: Salir"<<endl;
 cin>>ch;

 if (ch==1){
  
   v.MostrarInformacion();
   v.Resumen(); 
 }
 else if(ch==2){
   p.MostrarInformacion();
   p.Resumen(); 
  }
  else if(ch==3){
   e.MostrarInformacion();
   e.Resumen();
  }
  else if(ch==4){
   cout<<"Gracias por utilizar nuestros servicios!"<<endl;
   break;
  }
}
}



