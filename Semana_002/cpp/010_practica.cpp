#include <iostream>
#include <cmath>
using namespace std;

int main(void)
{
  float m, c, a, b, r, p, q, s, x1, x2, y1, y2, disc;

  cout << "Recta: y = mx + c" << endl;
  cout << "m: "; cin >> m;
  cout << "c: "; cin >> c;
  cout << "Circunferencia: (x-a)^2+(y-b)^2=r^2" << endl;
  cout << "a: "; cin >> a;
  cout << "b: "; cin >> b;
  cout << "r: "; cin >> r;

  p = pow(m,2) + 1;
  q = -(2*a + 2*m*(b-c));
  s = pow((b-c),2) - pow(r,2) + pow(a,2);
  disc = pow(q, 2) - 4*p*s;

  if (disc < 0) {
    cout << "La recta no intersecta con la circunferencia" << endl;
  } else if (disc > 0) {
    x1 = (-q + sqrt(disc))/(2*p);
    x2 = (-q - sqrt(disc))/(2*p);
    y1 = m*x1 + c;
    y2 = m*x2 + c;
    cout << "La recta es secante en los puntos: (" << x1 << ", " << y1 << ") y ("
                                                   << x2 << ", " << y2 << ")" << endl;
  } else {
    x1 = (-q + sqrt(disc))/(2*p);
    y1 = m*x1 + c;
    cout << "La recta es tangente en el punto: (" << x1 << ", " << y1 << ")" << endl;
  }

  return 0;
}
