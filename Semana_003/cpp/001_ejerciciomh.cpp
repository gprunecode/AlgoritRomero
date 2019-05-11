#include <iostream>
using namespace std;

int main(void)
{
  int n, i;
  float suma;

  cout << "Ingrese el número de elementos de la serie: "; cin >> n;
  i = 1;
  suma = 0;
  while (i <= n) {
    suma = suma + i/(i + 1.0);
    i = i + 1;
  }
  cout << "La suma es " << suma << endl;

  return 0;
}
