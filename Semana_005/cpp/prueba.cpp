#include "003_ejemplo.cpp"

int main(void)
{
  int n, fact;
  cout << "Ingrese un numero: "; cin >> n;
  fact = factorial(n);
  cout << "Su factorial es " << fact << endl;

  return 0;
}
