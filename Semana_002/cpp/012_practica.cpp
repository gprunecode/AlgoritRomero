#include <iostream>
using namespace std;

int main(void)
{
  float antiguedad, salario, utilidades;

  cout << "Antiguedad del trabajador: "; cin >> antiguedad;
  cout << "Salario: "; cin >> salario;

  if (antiguedad < 1) {
    utilidades = 0.05*salario;
  } else if (antiguedad < 2) {
    utilidades = 0.07*salario;
  } else if (antiguedad < 5) {
    utilidades = 0.1*salario;
  } else if (antiguedad < 10) {
    utilidades = 0.15*salario;
  } else {
    utilidades = 0.2*salario;
  }
  cout << "Las utilidades para el trabajador es de " << utilidades << endl;

  return 0;
}
