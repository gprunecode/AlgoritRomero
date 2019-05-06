#include <iostream>
using namespace std;

int main(void)
{
  int creditos, matricula;
  float PagoTotal, PagoCredito;
  char categoria;

  cout << "Ingrese el numero de creditos: "; cin >> creditos;
  cout << "Ingrese matricula (1: Normal, 2: extemporanea): "; cin >> matricula;
  cout << "Ingrese categoria (A, B, C): "; cin >> categoria;

  switch (categoria) {
    case 'A':
      PagoCredito = 125;
      break;
    case 'B':
      PagoCredito = 150;
      break;
    case 'C':
      PagoCredito = 180;
      break;
  }
  PagoTotal = PagoCredito * creditos;

  if (matricula == 2) {
    PagoTotal = PagoTotal + 40;
  }

  cout << "El pago total es " << PagoTotal << endl;

  return 0;
}
