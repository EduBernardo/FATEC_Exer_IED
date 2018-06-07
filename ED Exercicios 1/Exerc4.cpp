#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    float a,b,c,d;
    system("CLS");
    cout<< "Digite 4 valores, e cada valor sera atribuido a uma letra\n";
    cout<< "Exemplo: Primeiro valor sera a, segundo valor sera b, assim por diante\n";
    cin >>a>>b>>c>>d;
    cout<<"A+B="<<a+b<<";A*B="<<a*b<< endl;
    cout<<"A+C="<<a+c<<";A*C="<<a*c<< endl;
    cout<<"A+D="<<a+d<<";A*D="<<a*d<< endl;
    
    	cout<<"B+C="<<b+c<<";B*C="<<c*b<< endl;
    	cout<<"B+D="<<b+d<<";B*D="<<b*d<< endl;
    	
    		cout<<"C+D"<<d+c<<";C*D="<<c*d<< endl;  
    
 
    system("PAUSE");
    return EXIT_SUCCESS;
}

