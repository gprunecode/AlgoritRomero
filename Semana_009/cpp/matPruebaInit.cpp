#include <iostream>
using namespace std;

void llenarM(int mat[][10],int n, int m);
void mostrarM(int mat[][10], int n, int m);

int main(){
	//DV
	int matriz[10][10];
	int filas, columnas;
	cout<<"Ingrese las filas"<<endl;
	cin>>filas;
	cout<<"Ingrese las columnas"<<endl;
	cin>>columnas;
	
	llenarM(matriz,filas,columnas);
	mostrarM(matriz,filas,columnas);
}

void llenarM(int mat[][10],int n, int m){
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>mat[i][j];
		}
 	}
}

void mostrarM(int mat[][10], int n, int m){
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cout<<mat[i][j]<<" ";
		}
	cout<<endl;
	}
}
