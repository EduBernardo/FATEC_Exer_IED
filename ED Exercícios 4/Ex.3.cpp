//3.ª) Codifique um programa em C++ que transforme um número decimal em um número octal.
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

b=a%8;
c=a/8;
Push(&P1,b);

while (c!=0)
{
	a=c;
	b=a%8;
	c=a/8;
	Push(&P1,b);
	}

while(!pilhavazia(&P1))
{
	a = Pop(&P1);
	cout<<a;
}


system("PAUSE");
    return EXIT_SUCCESS;
}




