#include <iostream>
using namespace std;

int main(void)
{
  int estado, sexo, edad;
  string estadoCivil;

  cout << "Ingrese sexo (1: hombre, 2: mujer): "; cin >> sexo;
  cout << "Ingrese sexo (1: soltero, 2: casado, ";
  cout << "3: viudo, 4: divorciado): "; cin >> estado;
  cout << "Ingrese edad: "; cin >> edad;

  switch (estado) {
    case 1:
      estadoCivil = "soltero";
      break;
    case 2:
      estadoCivil = "casado";
      break;
    case 3:
      estadoCivil = "viudo";
      break;
    case 4:
      estadoCivil = "divorciado";
      break;
  }

  if (sexo == 1) {
    cout << "edad: " << edad << ", hombre, " << estadoCivil << endl;
  } else {
    cout << "edad: " << edad << ", mujer, " << estadoCivil << endl;
  }

  return 0;
}
