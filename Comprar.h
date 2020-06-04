#ifndef Comprar_h
#define Comprar_h

// #include "Vender.h"
#include<stdlib.h>

using namespace std;
//Clase hija de Vender
class Comprar/*public Vender */ {
  private: //Atributos
    string nombre;
    int edad;
    string direccion;
    string producto;
    int precio;
    int comision;
  public: //Métodos
    Comprar();
    Comprar(string, int, string, string, int, int); //Constructor
    void comprarProducto();
};

//Constructor, inicializar atributos
Comprar::Comprar(string _nombre, int _edad, string _direccion, string _producto, int _precio, int _comision){
  nombre = _nombre;
  edad = _edad;
  direccion = _direccion;
  producto = _producto;
  precio = _precio;
  comision = _comision;
}

void Comprar::comprarProducto(){
  if(edad>=18){
    cout<<"¡Has comprado "<<producto<<" satisfactoriamente!"<<endl;
    cout<<"A nombre de: "<<nombre<<endl;;
    cout<<"Direccion de entrega: "<<direccion<<endl;
    cout<<"Has pagado: "<<precio+comision<<"\n"<<endl;
  }
  else{
    cout<<nombre<<", no cumples con la edad mínima para utilizar esta plataforma. Lo sentimos"<<endl;
  }
}

#endif