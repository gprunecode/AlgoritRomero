#include <iostream>
using namespace std;

int main(void)
{
  float descuento, compra, PagoTotal;
  int color;

  cout << "Ingrese el monto de la compra: "; cin >> compra;
  cout << "color (1: blanco, 2: verde, 3: amarillo, 4: azul, 5: roja): "; cin >> color;

  switch (color) {
    case 1:
      descuento = 0;
      break;
    case 2:
      descuento = 0.1*compra;
      break;
    case 3:
      descuento = 0.25*compra;
      break;
    case 4:
      descuento = 0.5*compra;
      break;
    case 5:
      descuento = 1*compra;
      break;
  }
  PagoTotal = compra - descuento;
  cout << "El pago total con descuento es " << PagoTotal << endl;

  return 0;
}
