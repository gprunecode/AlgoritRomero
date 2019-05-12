#include <iostream>
#include <cmath>
using namespace std;

float discri(float, float, float);
void cuadratica(float, float, float, float&, float&);

int main(void)
{
  float coef1, coef2, coef3;
  float r1, r2;

  cout << "La ecuacion: ax^2 + bx + c = 0" << endl;
  cout << "Ingrese a: "; cin>> coef1;
  cout << "Ingrese b: "; cin>> coef2;
  cout << "Ingrese c: "; cin>> coef3;
  cuadratica(coef1, coef2, coef3, r1, r2);     //  Llamada a procedimiento
  cout << "La raiz 1 es " << r1 << endl;
  cout << "La raiz 2 es " << r2 << endl;

  return 0;
}

float discri(float a, float b, float c) {
  float d;
  d = b*b-4*a*c;
  return d;
}

void cuadratica(float a, float b, float c, float &raiz1, float &raiz2) {
  raiz1 = (-b+sqrt(discri(a,b,c)))/(2*a);
  raiz2 = (-b+sqrt(discri(a,b,c)))/(2*a);
}
