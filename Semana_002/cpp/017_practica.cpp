#include <iostream>
using namespace std;

int main(void)
{
  int horas, HorasExtra;
  float PagoHora, PagoTotal;

  cout << "Ingrese las horas trabajadas: "; cin >> horas;
  cout << "Ingrese el pago por hora: "; cin >> PagoHora;

  if (horas > 40) {
    HorasExtra = horas - 40;
    if (HorasExtra <= 8) {
      PagoTotal = 40*PagoHora + HorasExtra*PagoHora*2;
    } else {
      HorasExtra = HorasExtra - 8;
      PagoTotal = 40*PagoHora + 8*PagoHora*2 + HorasExtra*PagoHora*3;
    }
  } else {
    PagoTotal = horas*PagoHora;
  }
  cout << "El pago total es " << PagoTotal << endl;

  return 0;
}
