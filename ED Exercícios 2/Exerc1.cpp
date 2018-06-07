#include <cstdlib>
#include <iostream>

// Para saber resto da divisao e utiliza-lo, colocar porcentagem entre os numeros que sera utilizado na divisao 

using namespace std;

int main(int argc, char *argv[])
{
    
	float v1, v2;
	int r, ma, me;
    system("CLS");
    
    cout<<"Digite dois valores"<<endl;
    
    cin>>v1>>v2;
    	
    	if (v1>v2)
    	{
				ma=v1;
    		me=v2;
    	}
    		else
    		{
    			ma=v2;
    			me=v1;
    		}
    			
    r=ma%me;
    
    while (r!=0)
    
    {
    ma=me;
    	me=r;
    	
    	r=ma%me;
    	
    	
    	
	}
    	
    		
	    cout<<"O MDC eh igual a="<<me<<endl;
    
    
    system("PAUSE");
    return EXIT_SUCCESS;
}



// Dados dois números naturais A e B, calcular o MDC entre A e B através do processo e exemplo:   
//"	Para A=80  e B=112:

//1.	Dividir o número maior pelo menor: 
//112 dividido por 80 -> quociente 1 e resto 32;

//2.	Não dando resto zero, dividir o divisor pelo resto da divisão anterior:
//80 dividido por 32 -> quociente 2 e resto 16;

//3.	Prosseguir com as divisões até obter resto zero.
//32 dividido por 16 ->quociente 2 e resto 0.

//Portanto, o MDC(80,112) = 16.


