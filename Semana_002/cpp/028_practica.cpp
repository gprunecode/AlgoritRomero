#include <iostream>

using namespace std;

int main()
{
    int opcion;
    double monto,transaccion;
    
    cout<<"Digite el monto inicial: ";cin>>monto;
    cout<<"Digite el monto de transaccion: ";cin>>transaccion;
    cout<<"\n1.Agregar saldo."<<endl;
    cout<<"2.Retirar saldo."<<endl;
    cout<<"\nDigite el numero de la accion a realizar: ";cin>>opcion;
    
    switch(opcion)
    {
      case 1:
        cout<<"\nSe agregan "<<transaccion<<" soles al monto. "<<endl;
        cout<<"El nuevo monto es: "<<monto+transaccion<<endl;
        
      break;
      case 2:
        cout<<"\nSe retiran "<<transaccion<<" soles del monto. "<<endl;
        cout<<"El nuevo monto es: "<<monto-transaccion<<endl;
        
      break;   
    }
    
    
    system("pause");
    return 0;
}
