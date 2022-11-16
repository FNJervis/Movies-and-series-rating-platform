#ifndef Peliculas_h
#define Peliculas_h
#include "Videos.h"

class Peliculas:public Videos{

public:
  Peliculas();
  Peliculas(int, string, double, double, string);
  void MostrarInformacion();
  void Resumen();
};

#endif