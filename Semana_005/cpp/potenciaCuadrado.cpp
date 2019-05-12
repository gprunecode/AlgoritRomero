#include <iostream>
using namespace std;

int cuadrado(int);

int main(void)
{
  int k;
  k = 3;

  cout << "Cuadrado " << cuadrado(k) << endl;

  return 0;
}

int cuadrado(int n) {
  int k;
  k = n*n;
  return k;
}
