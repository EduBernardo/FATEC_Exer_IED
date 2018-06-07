//3ª) Criar um programa que receba 2 valores e calcule o produto através de uma função que  retorna valores
#include <cstdlib>
#include <iostream>

using namespace std;

float mult(float n1, float n2)
{
	return n1*n2;
}

int main ()
{
	int v1,v2;
	
	
	cout<<"Digite dois Valores"<<endl;
	cin>>v1>>v2;
	 
	 
	 cout<<"O produto dos numeros informado eh igual a="<<mult(v1,v2)<<endl;
	 
	 
	 system("PAUSE");
	 return 0;
	 
	 
}
	
