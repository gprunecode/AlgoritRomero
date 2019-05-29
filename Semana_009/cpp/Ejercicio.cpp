#include<iostream>
using namespace std;

void llenarM(int matriz[][50],int f, int c);
void mostrarM(int matriz[][50], int f, int c);
float promediar(int matriz[][50], int f, int c);
int sonMayores(int matriz[][50], int f, int c, float p);

int main(){

  int ventas[50][50];
  int fil, col;
  int mayores;
  float promedio;

  cout << "Ingrese las filas: ";
  cin >> fil;
  cout << "Ingrese las columnas: ";
  cin >> col;


  cout <<"\n\nAhora llene las ventas de la matriz \n"; 
  llenarM(ventas, fil, col);

  promedio = promediar(ventas, fil, col);
  mayores = sonMayores(ventas, fil, col, promedio);

  cout << "En la matriz" << endl;
  mostrarM(ventas, fil, col);
  cout << endl << endl << mayores << " elementos son mayores que el promedio(" << promedio << ")";

}

void llenarM(int matriz[][50], int f, int c){
  int i, j;
  for(i = 0; i < f; i++) {
    for(j = 0; j < c ;j++) {
      cout << i + 1 << "x" << j + 1 << ": ";
      cin >> matriz[i][j];
    }
  }
}

void mostrarM(int matriz[][50], int f, int c){
  int i, j;
  for(i = 0; i < f; i++){
    for(j = 0; j < c; j++){
      cout << matriz[i][j] << "\t";
    }
    cout << endl;
  }
}

float promediar(int matriz[][50], int f, int c){
  int i, j;
  int prom = 0;
  for(i = 0; i < f; i++){
    for(j = 0; j < c; j++){
      prom += matriz[i][j];
    }
  }
  prom = prom/(f*c);
  return prom;
}

int sonMayores(int matriz[][50], int f, int c, float p){
  int i, j, n = 0;
  for(i = 0; i < f; i++){
    for(j = 0; j < c; j++){
      if(matriz[i][j] > p){
        n++;
      }
    }
  }
  return n;
}
