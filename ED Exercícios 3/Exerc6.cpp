//6ª) Criar um programa que receba um número que corresponda a um mês do 1º trimestre e escreva o mês correspondente;
// caso o usuário digite o número fora do intervalo deverá aparecer inválido, mas utilizando uma função do tipo void.

#include <cstdlib>
#include <iostream>

using namespace std;

void mes (int n)
{
		while (n>3)
	
						{
							cout<<"Invalido"<<endl;
							break;
														
						}
			if (n==1)
			{	
				cout<<"Janeiro"<<endl;
			}
				else if (n==2)
				{
					cout<<"Fevereiro"<<endl;
				}
					if (n==3)
					{
						cout<<"Março"<<endl;
					}
					
	}
int main()
{
int x;

cout<<"Digite um numero de 1 a 3, para ser revelado o mes correspondente"<<endl;
cin>>x;

mes(x);

system ("PAUSE");
return (0);



	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}




