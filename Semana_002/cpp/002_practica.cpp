#include <iostream>
using namespace std;

int main(void)
{
  float sueldo, descuento, adicional, sueldoNeto;

  cout << "Ingrese el sueldo: "; cin >> sueldo;
  if (sueldo <= 1000) {
    descuento = 0.1*sueldo;
  } else if(sueldo <= 2000){
    adicional = sueldo - 1000;
    descuento = 0.1*1000 + 0.05*adicional;
  } else {
    adicional = sueldo - 2000;
    descuento = 0.1*1000 + 0.05*1000 + 0.03*adicional;
  }
  sueldoNeto = sueldo - descuento;

  cout << "El sueldo neto es " << sueldoNeto << endl;

  return 0;
}
