#include <iostream>
#include <cmath>
using namespace std;

int main(void)
{
  float a, b, c, x1, x2, disc;

  cout << "Ingrese a: "; cin >> a;
  cout << "Ingrese b: "; cin >> b;
  cout << "Ingrese c: "; cin >> c;

  disc = pow(b,2) - 4*a*c;

  if (disc>=0) {
    x1 = (-b + sqrt(disc))/(2*a);
    x2 = (-b - sqrt(disc))/(2*a);
    cout << "x1: " << x1 << endl;
    cout << "x2: " << x2 << endl;
  } else {
    cout << "No existen raices reales" << endl;
  }

  return 0;
}
