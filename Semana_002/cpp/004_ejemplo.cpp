#include <iostream>
using namespace std;

int main(void)
{
  int dia;
  string nombre;

  cout << "Ingrese un número del 1 al 7: ";
  cin >> dia;

  switch (dia) {
    case 1:
      nombre = "Lunes";
      break;
    case 2:
      nombre = "Martes";
      break;
    case 3:
      nombre = "Miercoles";
      break;
    case 4:
      nombre = "Jueves";
      break;
    case 5:
      nombre = "Viernes";
      break;
    case 6:
      nombre = "Sabado";
      break;
    case 7:
      nombre = "Domingo";
      break;
  }

  cout << "El día es " << nombre << endl;

  return 0;
}
