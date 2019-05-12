#include <iostream>
#include <cmath>
using namespace std;

float discri(float, float, float);
void cuadratica(float, float, float, float&, float &);

int main(void)
{
  float coef1, coef2, coef3;
  float r1, r2, disc;

  cout << "Sea la ecuacion ax^2 + bx + c = 0" << endl;
  cout << "Ingrese a: "; cin >> coef1;
  cout << "Ingrese b: "; cin >> coef2;
  cout << "Ingrese c: "; cin >> coef3;

  disc = discri(coef1, coef2, coef3);           // Llamada a funcion
  if (disc >= 0) {
    cuadratica(coef1, coef2, coef3, r1, r2);    // Llamada a procedimiento
    cout << "Raiz 1: " << r1 << endl;
    cout << "Raiz 2: " << r2 << endl;
  } else {
    cout << "No existen raices reales" << endl;
  }

  return 0;
}

float discri(float a, float b, float c) {
  float d;
  d = b*b - 4*a*c;
  return d;
}

void cuadratica(float a, float b, float c, float &raiz1, float &raiz2) {
  raiz1 = (-b + pow(discri(a,b,c),0.5))/(2*a);
  raiz2 = (-b - pow(discri(a,b,c),0.5))/(2*a);
}
