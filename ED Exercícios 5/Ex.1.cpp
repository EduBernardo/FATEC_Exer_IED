
#include <iostream>
#include <string>
#include "stdio.h"
#include "PILHA.h"
#include "stdlib.h"

//1.ª) Criar um programa em C++  que apresente as operações básicas da estrutura de dados Pilha, da seguinte maneira:
//			Menu de opções
//1.	Inserir um número inteiro na Pilha
//2.	Remover um elemento da Pilha
//3.	Mostrar o elemento do topo da Pilha
//4.	Mostrar os elementos da Pilha
//5.	Sair

using namespace std;

int main()
{

system("CLS");
int vcqu,vctr,vcdo,vcum,vd,ni;
struct Pilha P;
IniPilha(&P);

do{
system("CLS");	
cout<<"              Options Menu"<<endl;
cout<<"1.   Insert a Integer in the Pile"<<endl;
cout<<"2.   Remove a element from the Pile"<<endl;
cout<<"3.   Show the Pile`s Top element"<<endl;
cout<<"4.   Show all the Pile`s Elements"<<endl;
cout<<"5.   Exit"<<endl;




cout<<"Insert a Option below"<<endl;
cin>>vd;

switch(vd)
	{
    case 1:
        system("CLS");
        cout<<"Digite um numero inteiro"<<endl;
        cin>>vcum;
        Push(&P,vcum);
        break;

    case 2:
    	system("CLS");
        vcdo=Pop(&P);
        cout<<"Elemento excluido com sucesso"<<vcdo<<endl;
        system ("PAUSE");
        break;

    case 3:
    	system("CLS");
        vctr = Top(&P);
        cout<<"O Elemento no topo da pilha e"<<Top(&P)<<endl;
        system ("PAUSE");
        break;

    case 4:
    	system("CLS");
        cout<<"Esses sao os elementos da lista"<<endl;
        while (! pilhavazia (&P))
            {
                vcqu=Pop(&P);
                cout<<vcqu;
            }
            system ("PAUSE");
			break;
    case 5:
    	system("CLS");
            break;

    default:
        cout<<"Digite um Valor Valido!";
        break;
        
	}
}while(vd!=5);


EXIT_SUCCESS;

}

