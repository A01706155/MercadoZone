#include <iostream>
#include "Registrarse.h"
#include "Vender.h"
#include "Comprar.h"

using namespace std;

// Inicio del programa

int main() {
  //Producto de ejemplo en lo que integro guardado de productos por acciones
  string producto = "Jabon neutro para manos";
  int precio = 90, comision = 15;
  
  // Bienvenida
  cout<<"¡Bienvenido a MercadoZone!\n"<<endl;

  // Registro de usuarios
  Registrarse usuario1("Eduardo",18,"Altamira 211 Bellavista Guanajuato");
  Registrarse usuario2("Jackie",23,"Montana 204 Prados Verdes Salamanca Guanajuato");
  Registrarse usuario3("Tikerito",16,"Las brujas 110 El Marques Qro");
  
  // Ventas
  Vender usuario4("Jazmin",19,"El vergel 37 Irapuato Guanajuato",producto, precio);
  Vender usuario5("Juanin",25,"Altamira 211 Bellavista Guanajuato",producto, precio);

  //Compras
  Comprar usuario6("Juanin",25,"Altamira 211 Bellavista Guanajuato",producto, precio, comision);

  //Creacion de apuntadores
  Registrarse *_Registrarse;
  Vender *_Vender;
  Comprar *_Comprar;

  //Asignamos los apuntadores y los reasignamos mientras corre el programa
  // Acciones, objetos
  _Registrarse = &usuario1;
  _Registrarse->registrarUsuario();
  
  _Registrarse = &usuario2;
  _Registrarse->registrarUsuario();

  _Registrarse = &usuario3;
  _Registrarse->registrarUsuario();

  _Vender = &usuario4;
  _Vender->venderProducto();

  _Vender = &usuario5;
  _Vender->obtenerInformacion();

  _Comprar = &usuario6;
  _Comprar->comprarProducto();

  cout<<"FIN DEL PROGRAMA"<<endl;

}