//Codifique um programa em C++ que reverta uma serie de numeros ate que 999 seja digitado.
//Teste o seu programa com a serie 1,2,5,7,9,2,4,6,8.
#include<iostream>
#include<string>
#include "PILHA.h"
using namespace std;
int main(int argc, char *argv[])
{
system("CLS");
struct Pilha P1;
IniPilha(&P1);
int x;
cout << "Digite um numero inteiro decimal:" << endl;
cin >> x;
while (x!=999){
Push(&P1,x); 
24;
cout<< "Digite um numero inteiro decimal:" <<endl;
cin >> x;
}
while (! pilhavazia(&P1))
{
x = Pop(&P1);
cout << x ;
}
cout << endl;
system("PAUSE");
return EXIT_SUCCESS;
}
