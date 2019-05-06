#include <iostream>
using namespace std;

int main(void)
{
  int yy;

  cout << "Ingrese un anio: ";
  cin >> yy;

  if (yy%4 == 0) {
    if (yy%100 == 0) {
      if (yy%400 == 0) {
        cout << yy << " es bisiesto" << endl;
      } else {
        cout << yy << " no es bisiesto" << endl;
      }
    } else {
      cout << yy << " es bisiesto" << endl;
    }
  } else {
    cout << yy << " no es bisiesto" << endl;
  }

  return 0;
}
