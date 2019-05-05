#include <iostream>
using namespace std;

int main(void)
{
  float dd1, dd2, mm1, mm2, yy1, yy2, AP1, AP2, MP1, MP2, DJ1, DJ2, dias;

  cout << "Ingrese dia, mes y ano de la primera fecha: " << endl;
  cout << "dia: "; cin>> dd1;
  cout << "mes: "; cin >> mm1;
  cout << "ano: "; cin >> dd1;
  cout << "Ahora ingrese dia, mes y ano de la segunda fecha: " << endl;
  cout << "dia: "; cin >> dd2;
  cout << "mes: "; cin >> mm2;
  cout << "ano: "; cin >> dd2;

  if (mm1 > 2) {
    AP1 = yy1;
    MP1 = mm1 + 1;
  } else {
    AP1 = yy1 - 1;
    MP1 = mm1 + 13;
  }
  DJ1 = int(365.25*AP1) + int(30.6001*MP1) + dd1 + 1720982;

  if (mm2 > 2) {
    AP2 = yy2;
    MP2 = mm2 + 1;
  } else {
    AP2 = yy2 - 1;
    MP2 = mm2 + 13;
  }
  DJ2 = int(365.25*AP2) + int(30.6001*MP2) + dd2 + 1720982;

  if (DJ1 > DJ2) {
    dias = DJ1 - DJ2;
  } else {
    dias = DJ2 - DJ1;
  }

  cout << "Hay " << dias << " dias entre las dos fechas." << endl;

  return 0;
}
