#include <iostream>

using namespace std;

int main()
{
    int dia,mes,year;
    
    cout<<"Digite el dia: ";cin>>dia;
    cout<<"Digite el mes: ";cin>>mes;
    cout<<"Digite el anio: ";cin>>year;
    
    switch(mes)
    {
        case 1:
            cout<<"La fecha es: "<<dia<<" de enero del "<<year<<"."<<endl;
        
        break;
        case 2:
            cout<<"La fecha es: "<<dia<<" de febrero del "<<year<<"."<<endl;
        
        break;
        case 3:
            cout<<"La fecha es: "<<dia<<" de marzo del "<<year<<"."<<endl;
        
        break;
        case 4:
            cout<<"La fecha es: "<<dia<<" de abril del "<<year<<"."<<endl;
        
        break;
        case 5:
            cout<<"La fecha es: "<<dia<<" de mayo del "<<year<<"."<<endl;
        
        break;
        case 6:
            cout<<"La fecha es: "<<dia<<" de junio del "<<year<<"."<<endl;
        
        break;
        case 7:
            cout<<"La fecha es: "<<dia<<" de julio del "<<year<<"."<<endl;
        
        break;
        case 8:
            cout<<"La fecha es: "<<dia<<" de agosto del "<<year<<"."<<endl;
        
        break;
        case 9:
            cout<<"La fecha es: "<<dia<<" de setiembre del "<<year<<"."<<endl;
        
        break;
        case 10:
            cout<<"La fecha es: "<<dia<<" de octubre del "<<year<<"."<<endl;
        
        break;
        case 11:
            cout<<"La fecha es: "<<dia<<" de noviembre del "<<year<<"."<<endl;
        
        break;
        case 12:
            cout<<"La fecha es: "<<dia<<" de diciembre del "<<year<<"."<<endl;
        
        break;
    }
    
    system("pause");
    return 0;
}
