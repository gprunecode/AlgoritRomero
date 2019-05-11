#include <iostream>
using namespace std;

int main(void)
{
  int poblacionA, poblacionB, anoactual;
  float crecimientoA, crecimientoB;

  poblacionA = 52;
  poblacionB = 85;
  crecimientoA = 0.06;
  crecimientoB = 0.04;
  anoactual = 2019;

  do {
    poblacionA = poblacionA + int(poblacionA*crecimientoA);
    poblacionB = poblacionB + int(poblacionB*crecimientoB);
    anoactual = anoactual + 1;
  } while (poblacionA <= poblacionB);
  anoactual = anoactual - 1;

  cout << "La poblacion A de " << poblacionA << " millones supera a la poblacion B de "
       << poblacionB << " millones el ano " << anoactual << endl;

  return 0;
}
