#include <iostream>

using namespace std;

int main()
{
    double pagoCred,pagoTotal;
    int creditos,matricula;
    char categoria;
    
    cout<<"Digite el numero de creditos inscritos: ";
	cin>>creditos;
    cout<<"Digite la categoria de de matricula A,B,C : ";
	cin>>categoria;
    cout<<"Digite el tipo de matricula: ";cin>>matricula;
    
    switch(categoria)
    {
        case 'A':pagoCred=125;
        break;
        case 'B':pagoCred=150;
        break;
        case 'C':pagoCred=180;  
		break;  
    }
    
    pagoTotal=pagoCred*creditos;
    
    if(matricula==2)
        pagoTotal = 50 + pagoCred*creditos; 
    
    cout<<"\nEl pago total es: "<<pagoTotal<<endl;
    
    system("pause");
    return 0;
}
