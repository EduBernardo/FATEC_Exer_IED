
#include <cstdlib>
#include <iostream>

using namespace std;

float dis(float t,float v)					// Para obter o cálculo, o usuário deverá fornecer o tempo gasto na viagem e a velocidade média durante a mesma. 
{											
	return t*v;								//Desta forma será possível obter a distância percorrida com a fórmula: DISTÂNCIA= TEMPO * VELOCIDADE (utilizar uma função). 
}

float litus( float dis, float kmpl)			 //Tendo o valor da distância, basta calcular a quantidade de litros de combustível utilizada na viagem com a fórmula:  
{
	return dis/kmpl;						//LITROS_USADOS=DISTÂNCIA / "x" (através de função).
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
	
	



//3.ª) Efetuar o cálculo da quantidade de litros de combustível gastos em uma viagem, utilizando-se um automóvel que faz "x"  km/l.


 
 //O programa deverá apresentar os valores da velocidade média, tempo gasto na viagem, a distância percorrida e a quantidade de litros utilizada na viagem.
