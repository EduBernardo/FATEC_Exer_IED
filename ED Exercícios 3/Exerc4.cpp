//4ª) Criar um programa que receba um grau e o converta para radianos através de uma função.
//Fórmula:  radiano = grau * pi / 180
#include <cstdlib>
#include <iostream>

using namespace std;

float rad(float n1,float n2)
{
	return (n1*n2) / 180;
}

int main ()
{

float g,r,p;

cout<<"Digite o grau que desejas converter"<<endl;
cin>>g;  
cout<<"Digite o valor de pi"<<endl;
cin>>p;
r=rad(g,p)
;

cout<<"O valor convertido eh de="<<r<<"radianos"<<endl;

system("PAUSE");
return 0;

}
