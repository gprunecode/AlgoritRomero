#include <iostream>
using namespace std;

int main(void)
{
  int n, suma, i;

  cout << "Ingrese la cantidad de números de la serie: "; cin >> n;
  suma = 0;
  i = 1;
  while (i<=n) {
    suma = suma + i;
    i = i + 1;
  }
  cout << "La suma de la serie es " << suma << endl;

  return 0;
}
