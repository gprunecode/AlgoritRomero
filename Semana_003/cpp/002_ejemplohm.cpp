#include <iostream>
using namespace std;

int main(void)
{
  int n, parcial, final, pract, numAlu;
  float prom;

  cout << "Ingrese el total de alumnos: "; cin >> n;
  numAlu = 1;
  do {
    cout << "Parcial: "; cin >> parcial;
    cout << "Final: "; cin >> final;
    cout << "Practicas: "; cin >> pract;
    prom = (parcial + final + pract) / 3.0;
    cout << "El promedio es " << prom << endl;
    numAlu = numAlu + 1;
  } while (numAlu <= n);

  return 0;
}
