#ifndef Videos_h
#define Videos_h
#include <string>
using namespace std;

class Videos{

  private:
    int id;
    string nombre;
    double duracion;
    double calificacion;
    string genero;
  
  public:
    Videos();
    Videos(int, string, double, double, string);
    int GetId();
    string getNombre();
    double getDuracion();
    double getCalificacion();
    void setCalificacion();
    string getGenero();
    virtual void MostrarInformacion();
    void Resumen();
  
};















#endif