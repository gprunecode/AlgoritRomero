#include <iostream>
using namespace std;

int main(void)
{
  float monto, descuento, montoNeto;

  cout << "Ingrese el monto de la compra: "; cin >> monto;

  if (monto > 5000) {
    descuento = 0.3*monto;
    montoNeto = monto - descuento;
  } else if (monto > 3000) {
     descuento = 0.2*monto;
     montoNeto = monto - descuento;
  } else if (monto > 1000) {
    descuento = 0.1*monto;
    montoNeto = monto - descuento;
  } else {
    descuento = 0;
    montoNeto = monto - descuento;
  }
  cout << "El monto total es " << montoNeto << endl;

  return 0;
}
