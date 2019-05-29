#include <iostream>
using namespace std;

void imprimirPrimos(int n1, int n2);

int main(void)
{
  int num1, num2;

  cout << "Ingresa un numero: "; cin >> num1;
  cout << "Ahora ingresa otro numero: "; cin >> num2;

  if (num1 > num2) {
    imprimirPrimos(num2, num1);
  } else {
    imprimirPrimos(num1, num2);
  }

  return 0;
}

void imprimirPrimos(int n1, int n2) {
  int j, primo;

  for (int i = n1; i<=n2-1; i++) {
    primo = 1;
    cout << i << endl;
    j = 2;
    for (j = 2; j<i; j++) {
      primo = 0;
      j = i;
      cout << j << endl;
    }
  }

  if (primo != 0) {
    cout << j << endl;
  }
}
