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
    
    //8.�) Fa�a um programa que apresente a s�rie de Fibonacci at� o d�cimo quinto termo.  A s�rie � formada pela seq��ncia: 1,1,2,3,5,8,13,21,34,55,89,144,233,377,-610-.
	//Fn = Fn - 1 + Fn - 2
