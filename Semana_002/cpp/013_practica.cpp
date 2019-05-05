#include <iostream>
using namespace std;

int main(void)
{
  int num;

  cout << "Ingrese un numero: "; cin >> num;

  if (num == 0) {
    cout << "Es nulo" << endl;
  } else if (num % 2 == 0) {
    cout << "Es par" << endl;
  } else {
    cout << "Es impar" << endl;
  }

  return 0;
}
