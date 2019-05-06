#include <iostream>
using namespace std;

int main(void)
{
  float nota1, nota2, nota3, nota4, nota5, nota6, promedio, minimo;

  cout << "Ingrese las notas: " << endl;
  cout << "\tNota 1: "; cin >> nota1;
  cout << "\tNota 2: "; cin >> nota2;
  cout << "\tNota 3: "; cin >> nota3;
  cout << "\tNota 4: "; cin >> nota4;
  cout << "\tNota 5: "; cin >> nota5;
  cout << "\tNota 6: "; cin >> nota6;

  minimo = nota1;
  if (minimo > nota2) {
    minimo = nota2;
  } else if (minimo > nota3) {
    minimo = nota3;
  } else if (minimo > nota4) {
    minimo = nota4;
  } else if (minimo > nota5) {
    minimo = nota5;
  } else if (minimo > nota6) {
    minimo = nota6;
  }

  promedio = (nota1 + nota2 + nota3 + nota4 + nota5 + nota6 - minimo)/5.0;
  cout << "El promedio de las mejores 5 es: " << promedio << endl;

  return 0;
}
