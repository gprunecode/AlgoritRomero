#include <iostream>
using namespace std;

void llenarM(int nume[][20], int f, int c);
void mostrarM(int nume[][20], int f, int c);
void contar(int nume[][20], int f, int c, int &p, int &n, int &ce);

int main(){
  int num[20][20];
  int fil, col;//E
  int pos, neg, cero;//S

  cout << "Ingrese las filas(max 20): ";
  cin >> fil;
  cout << "Ingrese las columnas(max 20): ";
  cin >> col;

  cout << "---------------------------------" << endl;

  cout << "Ahora llene los valores de la matriz" << endl;
  llenarM(num,fil,col);

  cout << "Tu matriz es:" << endl;
  mostrarM(num,fil,col);

  contar(num, fil, col,pos,neg,cero);

  cout << "Tu matriz tiene: \n" << pos << " positivos; " << endl;
  cout << neg << " negativos y " << endl;
  cout<<cero<<" ceros" << endl;;
}

//procedimiento para llenar la matriz
void llenarM(int nume[][20], int f, int c){
  int i,j;
  for(i=0;i<f;i++){
    for(j=0;j<c;j++){
      cout << "Ingrese el valor " << i+1 << "x" << j+1 << ": ";
      cin >> nume[i][j];
    }
  }
}

//procedimiento para mostrar la matriz
void mostrarM(int nume[][20], int f, int c){
  int i, j;
  for(i=0;i<f;i++){
    for(j=0;j<c;j++){
      cout << nume[i][j] << "\t";
    }
    cout << endl;
  }
}

//procedimiento para contar los numeros
void contar(int nume[][20], int f, int c, int&p, int &n, int &ce){
  int i,j;
  p=0,n=0,ce=0;
  for(i=0;i<f;i++){
    for(j=0;j<c;j++){
      if(nume[i][j]<0){
        n++;
      }
      else if(nume[i][j]>0){
        p++;
      }
      else{
        ce++;
      }
    }
  }
}
