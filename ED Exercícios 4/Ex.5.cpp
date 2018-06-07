//5.ª) Codifique um programa em C++ que leia uma palavra e a imprima de forma invertida.
//Por exemplo:  exercício,  deverá ser impresso: oicícrexe
#include<iostream>
#include<string>
#include "PILHA.h"

using namespace std;
int main(int argc, char *argv[])
{
system("CLS");
struct Pilha P1;
IniPilha(&P1);

char p[15],a;

cout<<"Digite uma palavra"<<endl;

cin>>p;

Push(&P1,p);

a = Pop(&P1);

cout<<a;

}

