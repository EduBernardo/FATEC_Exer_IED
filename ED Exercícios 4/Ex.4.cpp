//4.ª) Codifique um programa em C++ que transforme um número decimal em um número hexadecimal. Dica: Se o resto for 10,11,12, 13, 14 ou 15, imprima, respectivamente, A,B,C,D,E ou F.
#include<iostream>
#include<string>
#include "PILHA.h"

using namespace std;
int main(int argc, char *argv[])
{
system("CLS");
struct Pilha P1;
IniPilha(&P1);

int a,b,c;

cout<<"Digite um numero decimal"<<endl;
cin>>a;

b=a%16;
c=a/16;

Push(&P1,b);

while(c!=0)
{
	a=c;
	b=a%16;
	c=a/16;
	Push(&P1,b);
		
}

while(!pilhavazia(&P1))
{
	a = Pop(&P1);
	switch (a)
	{
	case 10:
		{
			cout<<"A";
			break;
			
		}
	case 11:
		{
			cout<<"B";
			break;
			
		}
	case 12:
		{
			cout<<"C";
			break;
			
		}
		case 13:
		{
			cout<<"D";
			break;
			
		}
		case 14:
		{
			cout<<"E";
			break;
			
		}
		case 15:
		{
			cout<<"F";
			break;
					}
					
	default :
		{
			cout<<a;
			break;
		}
		
	}
		
}
system("PAUSE");
    return EXIT_SUCCESS;


}



