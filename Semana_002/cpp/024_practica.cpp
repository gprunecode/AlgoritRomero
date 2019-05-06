#include <iostream>

using namespace std;

int main()
{
    double monto,letra;
    int tipoFin;
    
    cout<<"Digite el monto de la compra: ";cin>>monto;
    cout<<"Digite el tipo de financiamiento: ";cin>>tipoFin;
    
    monto*=1.1;
    
    switch(tipoFin)
    {
        case 1:
            letra=monto*0.4;break;
        case 2:
            letra=monto*1.15/4;break;
        case 3:
            letra=monto*1.55/6;break; 
    }
    
    cout<<"El monto de cada letra a pagar es: "<<letra<<endl;
                                             
    system("pause");
    return 0;
}
