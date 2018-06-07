#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    float a=0,b=1,x,i,n;
    system("CLS");
    
    cout<<"Digite um numero"<<endl;
    cin>>n;
    
    for (i=1; i<n; i++)
    {
  		x=a+b;
  		a=b;
		  b=x;
  	

  	}
  		
    cout<<"A serie eh"<<x<<endl;
    
    system("PAUSE");
    return EXIT_SUCCESS;   

}
    
    //8.ª) Faça um programa que apresente a série de Fibonacci até o décimo quinto termo.  A série é formada pela seqüência: 1,1,2,3,5,8,13,21,34,55,89,144,233,377,-610-.
	//Fn = Fn - 1 + Fn - 2
