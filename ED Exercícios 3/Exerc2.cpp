#include <cstdlib>
#include <iostream>

//2�) Criar um programa que receba 4 notas e calcule a m�dia aritm�tica, atrav�s de uma fun��o.

using namespace std;

float media(float n1, float n2, float n3, float n4)
{
	return(n1+n2+n3+n4)/4;
}

int main ()
{
	float a,b,c,d;
	

	cout <<"Nota 1"<<endl;
	cin >>a;
	cout <<"Nota 2"<<endl;
	cin >>b;
	cout <<"Nota 3"<<endl;
	cin >>c;
	cout <<"Nota 4"<<endl;
	cin >>d;
	
	cout<<"A media eh="<<media(a,b,c,d)<<endl;
	
	system("PAUSE");
	return 0;
	
		
}
