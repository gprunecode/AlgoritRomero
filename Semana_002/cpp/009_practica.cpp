#include <iostream>
using namespace std;

int main(void)
{
  float comision, ventas;

  cout << "Ingrese ventas: "; cin >> ventas;

  if (ventas <= 150) {
    comision = 0;
  } else if (ventas <= 400) {
    comision = 0.1*ventas;
  } else {
    comision = 50 + 0.09*ventas;
  }

  cout << "Su comisione es de " << comision << endl;

  return 0;
}
