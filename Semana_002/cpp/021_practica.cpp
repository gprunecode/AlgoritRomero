#include <iostream>

using namespace std;

int main()
{
    int opcion;
    double b,b2,a,r,d,d2;
    
    cout<<"\tMENU"<<endl;
    cout<<"\n1.Area de un rectangulo."<<endl;
    cout<<"2.Area de un triangulo."<<endl;
    cout<<"3.Area de un trapecio."<<endl;
    cout<<"4.Area de un circulo."<<endl;
    cout<<"5.Area de un rombo."<<endl;
    
    cout<<"\nDigite la opcion a elegir: ";cin>>opcion;
    
    switch(opcion)
    {
        case 1:
        cout<<"\nDigite la base del rectangulo: ";cin>>b;
        cout<<"Digite la altura del rectangulo: ";cin>>a;
        cout<<"\nEl area del rectangulo es: "<<b*a<<endl;break;
        case 2:
        cout<<"\nDigite la base del triangulo: ";cin>>b;
        cout<<"Digite la altura del triangulo: ";cin>>a;
        cout<<"\nEl area del triangulo es: "<<b*a/2<<endl;break;
        case 3:
        cout<<"\nDigite la base menor del trapecio: ";cin>>b;
        cout<<"Digite la base mayor del trapecio: ";cin>>b2;
        cout<<"Digite la altura del trapecio: ";cin>>a;
        cout<<"\nEl area del trapecio es: "<<a*(b+b2)/2<<endl;break;
        case 4:
        cout<<"\nDigite el radio del circulo: ";cin>>r;
        cout<<"\nEl area del circulo es: "<<3.1416*r*r<<endl;break;
        case 5:
        cout<<"\Digite la diagonal mayor del rombo: ";cin>>d;
        cout<<"Digite la diagonal menor del rombo: ";cin>>d2;
        cout<<"\nEl area del rombo es: "<<d*d2/2<<endl;break;
    }
    
    
    
    system("pause");
    return 0;
}
