#include <iostream>
using namespace std;

int main(void)
{
  int totalHoras, pagoHora, horasExtra;
  float totalPago, descuento;

  cout << "Ingrese el total de horas: "; cin >> totalHoras;
  cout << "Ingrese el pago por hora: "; cin >> pagoHora;

  if (totalHoras > 40) {
    horasExtra = totalHoras - 40;
    totalPago = 40*pagoHora + horasExtra*pagoHora*1.5;
  } else {
    totalPago = totalHoras*pagoHora;
  }

  if (totalPago > 500) {
    descuento = 0.1*totalPago;
    totalPago = totalPago - descuento;
  }

  cout << "El pago semanal es S/." << totalPago << endl;

  return 0;
}
