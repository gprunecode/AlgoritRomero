#include <iostream>
using namespace std;

int main(void)
{
  int distancia, monto;

  cout << "Ingrese la distancia: "; cin >> distancia;

  if (distancia <= 300) {
    monto = 250;
  } else if (distancia <= 1000) {
    monto = 250 + 30*(distancia - 300);
  } else {
    monto = 250 + 30*(1000 - 300) + 20*(distancia - 1000);
  }

  cout << "El monto es " << monto << endl;

  return 0;
}
