//6�) Criar um programa que receba um n�mero que corresponda a um m�s do 1� trimestre e escreva o m�s correspondente;
// caso o usu�rio digite o n�mero fora do intervalo dever� aparecer inv�lido, mas utilizando uma fun��o do tipo void.

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
						cout<<"Mar�o"<<endl;
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




