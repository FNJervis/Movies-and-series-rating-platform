#ifndef Episodios_h
#define Episodios_h
#include "Series.h"
#include "Videos.h"

class Episodios:public Series{

private:
  int episodio;

public:

  Episodios();

  Episodios(int id, string nombre, double duracion, double calificacion, string genero, string titulo, int temporada, int episodio);


  void MostrarInformacion();

  int getEpisodio();

  void setEpisodio(int episodio);

  void Resumen();


};
#endif