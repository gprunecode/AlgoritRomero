#include <iostream>
using namespace std;

void division(int, int, int&, int&);   // Prototipo

int main(void)
{
  int num1, num2, coc, res;

  cout << "Ingrese un numero entero: "; cin >> num1;
  cout << "Ingrese otro numero entero: "; cin >> num2;

  division(num1, num2, coc, res);
  cout << "El cociente es " << coc << " y el residuo " << res << endl;

  return 0;
}

void division(int n1, int n2, int &c, int &r) {
  c = n1/n2;
  r = n1%n2;
}


