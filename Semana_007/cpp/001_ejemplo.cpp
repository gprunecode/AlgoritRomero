#include <iostream>
using namespace std;

void llenarV(int notas[], int n);
int contarAprob(int notas[], int n);
void mostrarV(int notas[], int n);

int main(void)
{
  int n, notas[20];
  int cont;

  cout << "Ingrese el numero de alumnos: "; cin >> n;
  llenarV(notas, n);
  cont = contarAprob(notas, n);
  mostrarV(notas, n);
  cout << "El numero de aprobado es " << cont << endl;

  return 0;
}

void llenarV(int notas[], int n) {
  int i;
  for (int i = 1; i <= n; i++) {
    cout << "Nota de Alumno " << i << ": ";
    cin >> notas[i];
  }
}

void mostrarV(int notas[], int n) {
  int i;
  for (int i = 1; i <= n; i++) {
    cout << "Nota de alumno " << i << ": " << notas[i] << endl;
  }
}

// Hallar cuantos aprobados
int contarAprob(int notas[], int n) {
  int i, cont = 0;
  for (int i = 1; i <= n; i++) {
    if (notas[i] >= 11) {
      cont = cont + 1;
    }
  }
  return cont;
}
