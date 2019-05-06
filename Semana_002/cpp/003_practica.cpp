#include <iostream>
using namespace std;

int main(void)
{
  int a, b, c, num1, num2, num3;

  cout << "Ingrese un numero: "; cin >> a;
  cout << "Ingrese otro numero: "; cin >> b;
  cout << "Ingrese otro numero: "; cin >> c;

  if (a > b) {
    if (a > c) {
      num1 = a;
      if (b > c) {
        num2 = b;
        num3 = c;
      } else {
        num2 = c;
        num3 = b;
      }
    } else {
      num1 = c;
      num2 = a;
      num3 = b;
    }
  } else {
    if (b > c) {
      num1 = b;
      if (a > c) {
        num2 = a;
        num3 = c;
      } else {
        num2 = c;
        num3 = a;
      }
    } else {
      num1 = c;
      num2 = b;
      num3 = a;
    }
  }
  cout << num1 << ", " << num2 << ", " << num3 << endl;

  return 0;
}
