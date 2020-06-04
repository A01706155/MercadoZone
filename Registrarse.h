#ifndef Registrarse_h
#define Registrarse_h

#include<iostream>
#include<stdlib.h>
using namespace std;

class Registrarse{
  private: //Atributos
    string nombre;
    int edad;
    string direccion;
  public: //Métodos
    Registrarse(string, int, string); //Constructor
    void registrarUsuario();
};

//Constructor, inicializar atributos
Registrarse::Registrarse(string _nombre, int _edad, string _direccion){
  nombre = _nombre;
  edad = _edad;
  direccion = _direccion;
}

void Registrarse::registrarUsuario(){
  cout<<"Tu nombre de usuario es: "<<nombre;
  if(edad>=18){
    cout<<""<<endl;
  }
  else{
    cout<<"\nNo cumples con la edad mínima para utilizar esta plataforma, lo sentimos"<<endl;
    return nombre;
  }
  cout<<"Tu direccion actual es: "<<direccion<<"\n"<<endl;
}

#endif