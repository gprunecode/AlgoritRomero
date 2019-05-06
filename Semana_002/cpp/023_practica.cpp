#include <iostream>

using namespace std;

int main()
{
    int edad,tipoEnf;
    double costo;
    
    cout<<"Digite la edad del paciente: ";cin>>edad;
    cout<<"Digite el tipo de enfermedad del paciente: ";cin>>tipoEnf;
    
    switch(tipoEnf)
    {
        case 0:
            costo=25;break;
        case 1:
            costo=16;break;
        case 2:
            costo=20;break;
        case 3:
            costo=32;break;
    }
    
    if(edad>=12 && edad<=22)
        costo*=1.1;
        
    cout<<"\nEl costo del paciente es: "<<costo<<endl;
    
    system("pause");
    return 0;
}
