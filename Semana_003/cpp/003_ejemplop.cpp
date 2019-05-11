#include <iostream>
using namespace std;

int main(void)
{
  int n, suma;

  cout << "Ingrese el numero de terminos de la serie: "; cin >> n;
  suma = 0;

  for (int i = 1; i <= n; i++) {
    suma = suma + i;
  }
  cout << "La suma es " << suma << endl;

  return 0;
}
