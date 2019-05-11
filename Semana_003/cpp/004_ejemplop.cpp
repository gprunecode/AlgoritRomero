#include <iostream>
using namespace std;

int main(void)
{
  int n, prod;

  cout << "Ingresa la cantidad de elementos de la serie: "; cin >> n;
  prod = 1;
  for (int i = 1; i<=n; i++) {
    prod = prod*i;
  }
  cout << "El producto es " << prod << endl;

  return 0;
}
