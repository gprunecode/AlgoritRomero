#include <iostream>
using namespace std;

int cuadrado(int);   // Prototipo

int main(void)
{
  int k, cuad;    // Variables locales a principal.

  cout << "Ingrese un numero: "; cin >> k;
  cuad = cuadrado(k);
  cout << "Cuadrado " << cuad << endl;

  return 0;
}

int cuadrado(int n) {
  int c;    // Variable local a cuadrado
  c = n*n;
  return c;
}
