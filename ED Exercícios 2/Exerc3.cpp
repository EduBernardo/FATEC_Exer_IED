
#include <cstdlib>
#include <iostream>

using namespace std;

float dis(float t,float v)					// Para obter o c�lculo, o usu�rio dever� fornecer o tempo gasto na viagem e a velocidade m�dia durante a mesma. 
{											
	return t*v;								//Desta forma ser� poss�vel obter a dist�ncia percorrida com a f�rmula: DIST�NCIA= TEMPO * VELOCIDADE (utilizar uma fun��o). 
}

float litus( float dis, float kmpl)			 //Tendo o valor da dist�ncia, basta calcular a quantidade de litros de combust�vel utilizada na viagem com a f�rmula:  
{
	return dis/kmpl;						//LITROS_USADOS=DIST�NCIA / "x" (atrav�s de fun��o).
}

int main()
{
float kpl,tg,vm,di; //kpl=kilometros por litro/tg=tempo gasto/vm=velocidade media.

cout<<"Informe quantos km seu carro faz por litro"<<endl;
cin>>kpl;
cout<<"Informe o tempo gasto na viagem (em horas)"<<endl;
cin>>tg;
cout<<"Informe a velocidade media praticada durante a viagem"<<endl;
cin>>vm;

di=dis(tg,vm);

 cout<<"a distancia percorrida foi de="<<di<<endl;cout<<"kilometros"<<endl;
 cout<<"a quantidade de litros utilizada foi de="<<litus(di,kpl)<<endl; 
 
 system("PAUSE");
 
 return 0;

}
	
	



//3.�) Efetuar o c�lculo da quantidade de litros de combust�vel gastos em uma viagem, utilizando-se um autom�vel que faz "x"  km/l.


 
 //O programa dever� apresentar os valores da velocidade m�dia, tempo gasto na viagem, a dist�ncia percorrida e a quantidade de litros utilizada na viagem.
