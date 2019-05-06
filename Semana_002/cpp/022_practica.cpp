#include <iostream>

using namespace std;

int main()
{
    int opcion;
    double b,a,p,r;
    
    cout<<"\tMENU"<<endl;
    cout<<"\n1.Volumen de un cubo."<<endl;
    cout<<"2.Volumen de un cilindro."<<endl;
    cout<<"3.Volumen de una esfera."<<endl;
    cout<<"4.Volumen de un cono."<<endl;
    cout<<"\nDigite la opcion a elegir: ";cin>>opcion;
    
    switch(opcion)
    {
        case 1:
        cout<<"\nDigite la base del cubo: ";cin>>b;
        cout<<"Digite la altura del cubo: ";cin>>a;
        cout<<"Digite la profundidad del cubo: ";cin>>p;
        cout<<"\nEl volumen del cubo es: "<<a*b*p<<endl;break;
        case 2:
        cout<<"\nDigite el radio de la base del cilindo: ";cin>>r;
        cout<<"Digite la altura del cilindro: ";cin>>a;
        cout<<"\nEl area del cilindro es: "<<3.1416*r*r*a<<endl;break;
        case 3:
        cout<<"\nDigite el radio de la esfera: ";cin>>r;
        cout<<"\nEl volumen de la esfera es: "<<4/3*3.1416*r*r*r<<endl;break;
        case 4:
        cout<<"\nDigite la altura del cono: ";cin>>a;
        cout<<"Digite el radio de la base del cono: ";cin>>r;
        cout<<"\nEl area del cono es: "<<3.1416*r*r*a/3<<endl;break;
    }
    
    
    system("pause");
    return 0;
    
}
