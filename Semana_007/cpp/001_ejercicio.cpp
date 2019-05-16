#include <iostream>
using namespace std;

void llenarV(int num[], int cant);
void contarValores(int num[], int cant, int &neg, int &pos, int &ceros);
void mostrarResultados(int neg, int pos, int ceros);

int main(void)
{
  int num[40];
  int cant, neg, pos, ceros;

  cout << "Ingrese cantidad de numeros: "; cin >> cant;
  llenarV(num, cant);
  contarValores(num, cant, neg, pos, ceros);
  mostrarResultados(neg, pos, ceros);

  return 0;
}

void llenarV(int num[], int cant) {
  int i;
  for (int i = 1; i <= cant; i++) {
    cout << "Numero " << i << ": ";
    cin >> num[i];
  }
}

void contarValores(int num[], int cant, int &neg, int &pos, int &ceros) {
  neg = 0;
  pos = 0;
  ceros = 0;
  for (int i = 1; i <= cant; i++) {
    if (num[i] < 0) {
      neg = neg + 1;
    } else if (num[i] > 0) {
      pos = pos + 1;
    } else {
      ceros = ceros + 1;
    }
  }
}

void mostrarResultados(int neg, int pos, int ceros) {
  cout << "Ingreso " << neg << " numeros negativos" << endl;
  cout << "Ingreso " << pos << " numeros positivos" << endl;
  cout << "Ingreso " << ceros << " ceros" << endl;
}
