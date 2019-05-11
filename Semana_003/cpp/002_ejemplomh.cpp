#include <iostream>
using namespace std;

int main(void)
{
  int n, i;
  float nota, prom, suma;

  cout << "Ingrese el numero de notas: "; cin >> n;
  i = 1;
  suma = 0;

  while (i<=n) {
    cout << "Nota: "; cin >> nota;
    suma = suma + nota;
    i = i + 1;
  }
  prom = suma/n;
  cout << "El promedio es " << prom << endl;

  return 0;
}
