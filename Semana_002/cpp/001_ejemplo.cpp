#include <iostream>
using namespace std;

int main(void)
{
  float basico, anti, bono, total;

  cout << "Ingrese el basico: ";
  cin >> basico;
  cout << "Ahora ingrese antiguedad: ";
  cin >> anti;
  bono = 0;
  if (anti>10)
    bono = basico*0.1;

  total = basico + bono;
  cout << "El bono es " << bono << " y el total " << total << endl;

  return 0;
}
