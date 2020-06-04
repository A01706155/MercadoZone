#ifndef Registrarse_h
#define Registrarse_h

#include<iostream>
#include<stdlib.h>
using namespace std;

class Vender : public: Registrarse{
  private: //Atributos
    string nombre;
    int edad;
    string direccion;
    string producto;
    int precio;
  public: //Métodos
    Vender(string, int, string, string, string); //Constructor
    void venderProducto();
    voud obtenerInformacion();
};

//Constructor, inicializar atributos
Registrarse::Registrarse(string _nombre, int _edad, string _direccion, string _producto, int _precio){
  nombre = _nombre;
  edad = _edad;
  direccion = _direccion;
  producto = _producto;
  precio = _precio;
}

void Vender::venderProducto(){
  return Registrarse::registrarusuario();
  cout<<"El nombre de tu producto a vender es: "<<producto<<endl;
  cout<<"El precio que has puesto es de: "<<precio<<endl;

}

void Vender::obtenerInformacion(){
  return Registrarse::registrarusuario();
  cout<<"Estás por comprar: "<<producto<<endl;
  cout<<"Su precio es: "<<precio<<endl;
}

#endif