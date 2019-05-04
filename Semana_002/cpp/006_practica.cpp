#include <iostream>
using namespace std;

int main(void)
{
  int hora, minuto, segundo;

  cout << "Ingrese horas: "; cin >> hora;
  cout << "Ingrese minutos: "; cin >> minuto;
  cout << "Ingrese segundos: "; cin >> segundo;

  segundo = segundo + 1;

  if (segundo == 60) {
    minuto = minuto + 1;
    segundo = 0;
    if (minuto == 60) {
      hora = hora + 1;
      minuto = 0;
      if (hora == 24) {
        hora = 0;
      }
    }
  }

  cout << "horas: " << hora << ", minutos: " << minuto << ", segundos: " << segundo << endl;

  return 0;
}
