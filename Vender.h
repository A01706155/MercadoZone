#ifndef Vender_h
#define Vender_h

#include "Registrarse.h"
#include<stdlib.h>

using namespace std;
//Clase hija de Registrarse 
class Vender : public Registrarse {
  protected: //Atributos
    string producto;
    int precio;
  public: //Métodos
    Vender();
    Vender(string, int, string, string, int); //Constructor
    void venderProducto();
    void obtenerInformacion();
};

Vender::Vender(){
  producto = "ProductoDefault";
  precio = 8374917;
}

//Constructor, inicializar atributos
Vender::Vender(string _nombre, int _edad, string _direccion, string _producto, int _precio){
  nombre = _nombre;
  edad = _edad;
  direccion = _direccion;
  producto = _producto;
  precio = _precio;
}

void Vender::venderProducto(){
  if(edad>=18){
    cout<<"Tu nombre de usuario es: "<<nombre<<endl;;
    cout<<"Tu direccion actual es: "<<direccion<<endl;
    cout<<"El nombre de tu producto a vender es: "<<producto<<endl;
    cout<<"El precio que has puesto es de: "<<precio<<"\n"<<endl;
  }
  else{
    cout<<nombre<<", no cumples con la edad mínima para utilizar esta plataforma. Lo sentimos"<<endl;
  }
}

void Vender::obtenerInformacion(){
  if(edad>=18){
    cout<<"Tu nombre de usuario es: "<<nombre<<endl;;
    cout<<"Tu direccion actual es: "<<direccion<<endl;
    cout<<"Estás por comprar: "<<producto<<endl;
    cout<<"Su precio es: "<<precio<<"\n"<<endl;
  }
  else{
    cout<<nombre<<", no cumples con la edad mínima para utilizar esta plataforma. Lo sentimos"<<endl;
  }
}

#endif