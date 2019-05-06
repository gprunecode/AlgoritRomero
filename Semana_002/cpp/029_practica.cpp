#include <iostream>

using namespace std;

int main()
{
    int dia,mes,year;
    bool bisiesto;
    
    cout<<"Digite el dia: ";cin>>dia;
    cout<<"Digite el mes: ";cin>>mes;
    cout<<"Digite el anio: ";cin>>year;
    
    if((year%4==0 && year%100!=0) || (year%4==0 && year%100==0 && year%400==0))
        bisiesto=true;
    else
        bisiesto=false;
    
if(mes>0 && mes <=12)
{
    
    switch(mes)
    {
        case 1:
            if(dia<=0 || dia>31)
                cout<<"La fecha es incorrecta."<<endl;
            else
                cout<<"La fecha es correcta."<<endl;
        
        break;
        case 2:
            if(bisiesto)
            {
              if(dia<=0 || dia>29)
                cout<<"La fecha es incorrecta."<<endl;
               else
                cout<<"La fecha es correcta."<<endl;  
            }
            
            if(!bisiesto)
            {
              if(dia<=0 || dia>28)
                cout<<"La fecha es incorrecta."<<endl;
               else
                cout<<"La fecha es correcta."<<endl;  
            }
        
        break;
        case 3:
            if(dia<=0 || dia>31)
                cout<<"La fecha es incorrecta."<<endl;
            else
                cout<<"La fecha es correcta."<<endl;
        
        break;
        case 4:
            if(dia<=0 || dia>30)
                cout<<"La fecha es incorrecta."<<endl;
            else
                cout<<"La fecha es correcta."<<endl;
        
        break;
        case 5:
            if(dia<=0 || dia>31)
                cout<<"La fecha es incorrecta."<<endl;
            else
                cout<<"La fecha es correcta."<<endl;
        
        break;
        case 6:
            if(dia<=0 || dia>30)
                cout<<"La fecha es incorrecta."<<endl;
            else
                cout<<"La fecha es correcta."<<endl;
        
        break;
        case 7:
            if(dia<=0 || dia>31)
                cout<<"La fecha es incorrecta."<<endl;
            else
                cout<<"La fecha es correcta."<<endl;
        
        break;
        case 8:
            if(dia<=0 || dia>30)
                cout<<"La fecha es incorrecta."<<endl;
            else
                cout<<"La fecha es correcta."<<endl;
        
        break;
        case 9:
            if(dia<=0 || dia>30)
                cout<<"La fecha es incorrecta."<<endl;
            else
                cout<<"La fecha es correcta."<<endl;
        
        break;
        case 10:
            if(dia<=0 || dia>31)
                cout<<"La fecha es incorrecta."<<endl;
            else
                cout<<"La fecha es correcta."<<endl;
        
        break;
        case 11:
            if(dia<=0 || dia>30)
                cout<<"La fecha es incorrecta."<<endl;
            else
                cout<<"La fecha es correcta."<<endl;
        
        break;
        case 12:
            if(dia<=0 || dia>31)
                cout<<"La fecha es incorrecta."<<endl;
            else
                cout<<"La fecha es correcta."<<endl;
        
        break;
    }
}
else
    cout<<"La fecha es incorrecta"<<endl;
        
    system("pause");
    return 0;
}
