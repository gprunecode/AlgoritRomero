#include <iostream>
using namespace std;

int factorial(int);             // Prototipo.
float sumatoriaInversa(int);    // Prototipo

int main(void)
{
  float suma;
  int n;
  cout << "Ingrese el numero de terminos de la serie: "; cin >> n;
  suma = sumatoriaInversa(n);
  cout << "La suma es " << suma << endl;

  return 0;
}

int factorial(int n) {
  int i, fact = 1;
  for (int i = 1; i<=n; i++) {
    fact = fact*i;
  }
  return fact;
}

float sumatoriaInversa(int n) {
  float sumatoria;

  for (int i = 1; i <= n; i++) {
    sumatoria = sumatoria + 1.0/factorial(i);
  }
  return sumatoria;
}
