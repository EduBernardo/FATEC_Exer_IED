
#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])

{
int b,e,i=0,p=1;



cout<<"Digite a base"<<endl;

cin>>b;

cout<<"Digite o expoente"<<endl;
cin>>e;


while (i!=e)

{
p=p*b;
i=i+1;
}

cout<<"a resposta da potencia eh="<<p<<endl;


system ("Pause");
return 0;


}


//2.�) Dado um n�mero real X e um n�mero natural K, calcular a pot�ncia X elevado a K atrav�s de produtos sucessivos.
	//xk    =  x.x.x.x.  ......  x
	//while (contador != n) {
    //potencia = potencia * x;
    //contador = contador + 1;




