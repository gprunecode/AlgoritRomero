#include <iostream>
using namespace std;

int main(void)
{
  int yr;

  cout << "Ingrese un anio: ";
  cin >> yr;

  if (yr%4 == 0) {
    if (yr%100 == 0) {
      if (yr%400 == 0) {
        cout << yr << " es bisiesto" << endl;
      } else {
        cout << yr << " no es bisiesto" << endl;
      }
    } else {
      cout << yr << " es bisiesto" << endl;
    }
  } else {
    cout << yr << " no es bisiesto" << endl;
  }

  return 0;
}
