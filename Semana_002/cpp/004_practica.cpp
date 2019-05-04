#include <iostream>
using namespace std;

int main(void)
{
  int dias, minutos, horas;

  cout << "Ingrese minutos: "; cin >> minutos;
  dias = 0;
  horas = 0;

  if (minutos >= 1440) {
    dias = minutos/1440;
    minutos = minutos%1440;
    if (minutos >= 60) {
      horas = minutos/60;
      minutos = minutos%60;
    }
  } else if (minutos >= 60) {
    horas = minutos/60;
    minutos = minutos%60;
  }

  cout << "Dias: " << dias << ", horas: " << horas << ", minutos: " << minutos << endl;

  return 0;
}
