//Polimorfismo
#include <iostream>
#include <stdlib.h>

using namespace std;

class Cliente{
  private:
    string nombre;
    int edad;
    
  public:
    Cliente(string, int);
    virtual void comprar();
	
};

Cliente::Cliente(string _nombre, int _edad){
  nombre = _nombre;
  edad = _edad;
}

class Paqueteria : public Cliente {
  private:
    string nombrePaqueteria;
    int dias;
    
  public:
    Paqueteria(string, int, string, int);
    void comprar();
};

Paqueteria::Paqueteria(string _nombre, int _edad, string _nombrePaqueteria, int _dias) : Cliente(_nombre, _edad){
  nombrePaqueteria = _nombrePaqueteria;
  dias = _dias;
}

void Cliente::comprar(){
  cout<<"Nombre: "<<nombre<<endl;
  cout<<"Edad: "<<edad<<endl;
}

void Paqueteria::comprar(){
  Cliente::comprar();
  cout<<"Paquetería : "<<nombrePaqueteria<<endl;
  cout<<"Días para entrega: "<<dias<<endl;
}

int main(){
  Cliente *clientes[3];
  
  clientes[0] = new Paqueteria("Michelle",19,"FedEx",1);
  
  clientes[0]->comprar();
  
  
  
  return 0;
}
