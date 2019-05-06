#include <iostream>

using namespace std;

int main()
{
    char instituto,colegio;
    double monto;
    
    cout<<"Digite el importe a pagar: ";cin>>monto;
    cout<<"Digite el tipo de instituto (A,B o C): ";cin>>instituto;
    cout<<"Digite la procedencia del colegio (N=Nacional,P=Particular): ";cin>>colegio;
    
    switch(instituto)
    {
        case 'A':
            if(colegio=='N' || colegio=='n')
                monto*=0.5;
            if(colegio=='P' || colegio=='p')
                monto*=0.75;
                
        break;
        case 'B':
            if(colegio=='N' || colegio=='n')
                monto*=0.6;
            if(colegio=='P' || colegio=='p')
                monto*=0.71;
                
        break;
        case 'C':
            if(colegio=='N' || colegio=='n')
                monto*=0.7;
            if(colegio=='P' || colegio=='p')
                monto*=0.85;
                
        break;
    }
    
    cout<<"El importe final a pagar es: "<<monto<<endl;
    
    system("pause");
    return 0;
}
