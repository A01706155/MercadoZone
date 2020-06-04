#include <iostream>
#include "Registrarse.h"
#include "Vender.h"
using namespace std;

// Inicio del programa

int main() {
  // Bienvenida
  
  cout<<"Bienvenido a MercadoZone"<<endl;

  // Registro de usuarios
  Registrarse usuario1("Eduardo",18,"Altamira 211 Bellavista Guanajuato");
  Registrarse usuario2("Jackie",23,"Montana 204 Prados Verdes Salamanca Guanajuato");
  Registrarse usuario3("Tikerito",16,"Las brujas 110 El Marques Qro");

  // Acciones
  usuario1.registrarUsuario();
  usuario2.registrarUsuario();
  usuario3.registrarUsuario();
}