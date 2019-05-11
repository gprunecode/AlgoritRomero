#include <iostream>
using namespace std;

int main(void)
{
  int num, numeroDigitos, SumaPar, SumaImpar, digito;

  cout << "Ingrese un numero: "; cin >> num;
  SumaPar = 0;
  SumaImpar = 0;
  numeroDigitos = 0;
  while (num != 0) {
    if (int(num/10) == 0) {
      digito = num;
    } else {
      digito = num%10;
    }
    if (digito%2 == 0) {
      SumaPar = SumaPar + digito;
    } else {
      SumaImpar = SumaImpar + digito;
    }
    num = int(num/10);
    numeroDigitos = numeroDigitos + 1;
  }
  cout << "El numero tiene " << numeroDigitos << " digitos." << endl;
  cout << "La suma de sus digitos pares es " << SumaPar << endl;
  cout << "La suma de sus digitos impares es " << SumaImpar << endl;

  return 0;
}
