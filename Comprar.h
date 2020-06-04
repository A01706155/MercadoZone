#ifndef Comprar_h
#define Comprar_h

#include<iostream>
#include<stdlib.h>
using namespace std;

class Comprar{
  private: //Atributos
    string nombre;
    int edad;
    string direccion;
  public: //Métodos
    Comprar(string, int, string); //Constructor
    void comprarProducto();
};

//Constructor, inicializar atributos
Comprar::Comprar(string _nombre, int _edad, string _direccion){
  nombre = _nombre;
  edad = _edad;
  direccion = _direccion;
}

void Comprar::comprarProducto(){
  cout<<"Tu nombre de usuario es: "<<nombre;
  if(edad>=18){
    cout<<""<<endl;
  }
  else{
    cout<<"\nNo cumples con la edad mínima para utilizar esta plataforma, lo sentimos"<<endl;
    exit(0);
  }
  cout<<"Tu direccion actual es: "<<direccion<<endl;
}

#endif