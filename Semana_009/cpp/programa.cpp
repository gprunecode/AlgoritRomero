#include <iostream>
using namespace std;

void llenarM(float mat[][50], int f, int c);
float promedioV(float mat[][50], int f, int c);
int contarVentasMayores(float mat[][50], int f, int c, float prom);
void mostrarMatriz(float mat[][50], int f, int c);

int main(void)
{
  int fila, col, ventasMayores;
  float mat[50][50];
  float promedio;

  cout << "Ingrese numero de columnas: "; cin >> col;
  cout << "Ingrese numero de filas: "; cin >> fila;

  llenarM(mat, fila, col);
  promedio = promedioV(mat, fila, col);
  ventasMayores = contarVentasMayores(mat, fila, col, promedio);

  cout << "Promedio: " << promedio << endl;
  cout << "Nro Ventas mayores del promedio: " << ventasMayores << endl;

  mostrarMatriz(mat, fila, col);

  return 0;
}


void llenarM(float mat[][50], int f, int c) {
  for (int i = 0; i < c; i++) {
    for (int j = 0; j < f; j++) {
      cout << "Venta[" << i << ", " << j << "]: ";
      cin >> mat[i][j];
    }
  }
}


float promedioV(float mat[][50], int f, int c) {
  float sumaTotal, promedio;
  int ndatos, i, j;

  sumaTotal = 0;
  ndatos = f*c;
  for (int i = 0; i < c; i++) {
    for (int j = 0; j < f; j++) {
      sumaTotal = sumaTotal + mat[i][j];
    }
  }
  promedio = sumaTotal / ndatos;

  return promedio;
}

int contarVentasMayores(float mat[][50], int f, int c, float prom) {
  int contador;

  contador = 1;
  for (int i = 0; i < c; i++) {
    for (int j = 0; j < f; j++) {
      if (mat[i][j] >= prom) {
        contador = contador + 1;
      }
    }
  }
  return contador;
}

void mostrarMatriz(float mat[][50], int f, int c) {
  for (int i = 0; i < c; i++) {
    for (int j = 0; j < f; j++) {
      cout << mat[i][j] << "\t";
    }
    cout << endl;
  }
}
