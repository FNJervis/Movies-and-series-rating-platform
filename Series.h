#ifndef Series_h
#define Series_h
#include "Videos.h"
#include <string>

class Series:public Videos{

  private:
   string titulo;

   int temporada;

  public:
   Series();

   Series(int, string, double, double, string, string, int);

   string getTitulo();

   string setTitulo(string);

   int getTemporada();

   int setTemporada(int);

   void MostrarInformacion();

   void Resumen();

};
















#endif