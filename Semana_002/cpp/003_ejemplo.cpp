#include <iostream>
using namespace std;

int main(void)
{
  float consumo, importe;

  cout << "Ingrese el consumo: ";
  cin >> consumo;

  if (consumo < 100)
    importe = consumo*1;
  else if (consumo <= 500)
    importe = consumo*1.5;
  else
    importe = consumo*2;

  cout << "El importe es " << importe << endl;

  return 0;
}
