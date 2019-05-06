#include <iostream>

using namespace std;

int main()
{
	int n;
	
		cout<<"Digite el numero: ";cin>>n;
		
		if(n%2==0)
			cout<<"El numero es multiplo de 2."<<endl;
		if(n%3==0)
			cout<<"El numero es multiplo de 3."<<endl;
		if(n%5==0)
			cout<<"El numero es multiplo de 5."<<endl;
		if(n%2!=0 && n%3!=0 && n%5!=0)
			cout<<"El numero no es multiplo de 2,3 o 5."<<endl;
	
	system("pause");
	return 0;
}
