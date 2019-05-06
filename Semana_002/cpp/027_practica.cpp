#include <iostream>

using namespace std;

int main()
{
	double monto,dscto,montoFinal;
	char genero,origen,talla;
	
	cout<<"Digite el monto a pagar:  ";cin>>monto;
	cout<<"Digite su genero (H=Hombre,M=Mujer): ";cin>>genero;
	cout<<"Digite su talla: ";cin>>talla;
	cout<<"Digite el origen de la compra (N=Nacional,I=Importado): ";cin>>origen;
	
	cout<<"\nEl monto inicial es: "<<monto<<endl;
	
	if(genero=='H' || genero=='h')
	{
		switch(talla)
		{
			case 'S':
				if(origen=='N' || origen=='n')
					dscto=0.1;
				if(origen=='I' || origen=='i')
					dscto=0.05;
					
					break;
			case 'M':
				if(origen=='N' || origen=='n')
					dscto=0.12;
				if(origen=='I' || origen=='i')
					dscto=0.07;
					
					break;	
				case 'L':
				if(origen=='N' || origen=='n')
					dscto=0.15;
				if(origen=='I' || origen=='i')
					dscto=0.1;
					
				break;
		}	
	}
	
	if(genero=='M' || genero=='m')
	{
		switch(talla)
		{
			case 'S':
				if(origen=='N' || origen=='n')
					dscto=0.15;
				if(origen=='I' || origen=='i')
					dscto=0.07;
					
					break;
			case 'M':
				if(origen=='N' || origen=='n')
					dscto=0.17;
				if(origen=='I' || origen=='i')
					dscto=0.09;
					
					break;
				case 'L':
				if(origen=='N' || origen=='n')
					dscto=0.2;
				if(origen=='I' || origen=='i')
					dscto=0.12;
					
					break;
		}	
	}
	
	montoFinal=(1-dscto)*monto;
	
	cout<<"Su descuento es del "<<dscto*100<<"%."<<endl;
	
	cout<<"El monto final a pagar es: "<<montoFinal<<endl;
	
	system("pause");
	return 0;	
	
}
