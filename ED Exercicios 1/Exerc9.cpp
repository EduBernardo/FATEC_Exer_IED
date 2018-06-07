#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    float a,m,me,i,s=0,x;
    system("CLS");
    
    cout<<"Digite um numero"<<endl;
      
    for (i=0; i<15; i++)
    {
  		cin>> a;

			if  (a>m) 
			
			m=a;
			
			s=s+a;
  	}
  		me=s/i;
  		
  		
  		x=me-m;
  		
  	cout<<"A media eh="<<me<<endl;
  	cout<<"O maior numero eh="<<m<<endl;
  		
    cout<<"A diferença entre o maior valor e a media eh="<<x<<endl;
    
    system("PAUSE");
    return EXIT_SUCCESS;   

}
    
    //9.a.) . Faça um programa que leia 15 valores e informe o valor da diferença entre a média e o maior valor
