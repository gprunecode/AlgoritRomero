#include <iostream>
using namespace std;

int main(void)
{
  int n, i, cont;
  float sueldo, PagoEmpresa;

  cout << "Ingrese el numero de trabajadores: "; cin >> n;
  i = 1;
  cont = 0;
  PagoEmpresa = 0;

  do {
    cout << "Ingrese sueldo: "; cin >> sueldo;
    if (sueldo > 5000) {
      cont = cont + 1;
    }
    PagoEmpresa = PagoEmpresa + sueldo;
    i = i + 1;
  } while (i <= n);
  cout << "El pago total de la empresa es " << PagoEmpresa << endl;
  cout << "El numero de trabajadores que ganan mas de 5000 es " << cont << endl;

  return 0;
}
