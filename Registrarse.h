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
    Registrarse();
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
  if(edad>=18){
    cout<<"Tu nombre de usuario es: "<<nombre<<endl;;
    cout<<"Tu direccion actual es: "<<direccion<<"\n"<<endl;
  }
  else{
    cout<<nombre<<", no cumples con la edad mínima para utilizar esta plataforma. Lo sentimos"<<endl;
  }
}

#endif