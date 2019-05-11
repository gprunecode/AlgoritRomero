#include <iostream>
using namespace std;

int main(void)
{
  int num1, num2, mult;
  cout << "Ingrese un numero: "; cin >> num1;
  cout << "Ingrese otro numero: "; cin >> num2;

  mult = 0;
  for (int i = 1; i<=num2; i++) {
    mult = mult + num1;
  }
  cout << "El producto es " << mult << endl;

  return 0;
}
