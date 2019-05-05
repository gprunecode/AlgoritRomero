#include <iostream>
using namespace std;

int main(void)
{
  int dd, mm, yy;

  cout << "Ingrese el ano: "; cin >> yy;
  cout << "Ingrese el mes: "; cin >> mm;
  cout << "Ingrese el dia: "; cin >> dd;

  dd = dd + 1;

  if (dd == 31) {
    mm = mm + 1;
    dd = 1;
    if (mm == 13) {
      yy = yy + 1;
      mm = 1;
    }
  }

  cout << "El día siguiente es: " << dd << " / " << mm << " / " << yy << endl;

  return 0;
}
