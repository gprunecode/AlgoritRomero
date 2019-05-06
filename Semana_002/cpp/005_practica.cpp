#include <iostream>
#include <cmath>
using namespace std;

int main(void)
{
  float a, b, c;

  cout << "Ingrese el lado a: "; cin >> a;
  cout << "Ingrese el lado b: "; cin >> b;
  cout << "Ingrese el lado c: "; cin >> c;

  if (a > abs(b-c) && a < b+c) {
    cout << "Pertenecen a un triangulo ";
    if (a==b) {
      if (b==c) {
        cout << "equilatero." << endl;
      } else {
        cout << "isosceles." << endl;
      }
    } else if (b==c) {
      cout << "isosceles." << endl;
    } else {
      cout << "escaleno." << endl;
    }
  } else {
    cout << "No pertenecen a un triangulo." << endl;
  }

  return 0;
}
