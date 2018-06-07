//7ª) Criar um programa que retorne o fatorial de um número, usando uma função que receba um valor e retorne o fatorial desse valor.
//Fatorial de 5 = 5 x 4 x 3 x 2 x 1 = 120


#include <cstdlib>
#include <iostream>

using namespace std;

int fat(int a)
{
	
	int b=1, i=0;
	
		while (i!=a)
	{
		i=i+1;
	 b=b*i;
}
	return b;
	
}

int main ()

{
int a,b;

cout<<"Digite um numero inteiro"<<endl;
cin>>a;
 b=fat(a);
cout<<"O seu fatorial eh="<<b<<endl;

system("PAUSE");
return (0);

	
	
}


