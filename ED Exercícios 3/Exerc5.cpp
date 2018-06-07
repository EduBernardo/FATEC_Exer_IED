//5ª) Criar um programa que mostre qual o maior valor entre dois números, utilizando uma função do tipo void 

#include <cstdlib>
#include <iostream>

using namespace std;

void maior( int v1,int v2)
{
	int ma;
	
	if (v1>v2)
	{
		ma=v1;
		
	}
	else
	{
		ma=v2;
	}
	
	cout<<"Maior eh="<<ma<<endl;
}
	
int main()
{
	int v1,v2;
	
	cout<<"Digite dois Valores"<<endl;
	cin>>v1>>v2;
	
	maior(v1,v2);
	
	
	system("PAUSE");
	return 0;
	
	
	
}
