#include <iostream>
#include "Registrarse.h"
#include "Vender.h"
#include "Comprar.h"
using namespace std;

// Inicio del programa

int main() {
  // Bienvenida
  
  cout<<"¡Bienvenido a MercadoZone!\n"<<endl;

  // Registro de usuarios
  Registrarse usuario1("Eduardo",18,"Altamira 211 Bellavista Guanajuato");
  Registrarse usuario2("Jackie",23,"Montana 204 Prados Verdes Salamanca Guanajuato");
  Registrarse usuario3("Tikerito",16,"Las brujas 110 El Marques Qro");
  
  // Ventas
  string producto = "Jabon neutro para manos";
  int precio = 90, comision = 15;

  Vender usuario4("Jazmin",19,"El vergel 37 Irapuato Guanajuato",producto, precio);
  Vender usuario5("Juanin",25,"Altamira 211 Bellavista Guanajuato",producto, precio);

  //Compras

  Comprar usuario6("Juanin",25,"Altamira 211 Bellavista Guanajuato",producto, precio, comision);


  // Acciones
  usuario1.registrarUsuario();
  usuario2.registrarUsuario();
  usuario3.registrarUsuario();
  usuario4.venderProducto();
  usuario5.obtenerInformacion();
  usuario6.comprarProducto();

  cout<<"FIN DEL PROGRAMA"<<endl;

}