#include <cstdlib>
#include <iostream>

using namespace std;

int dobro (int x);
int main(int argc, char *argv[])
{
    int v;
    system("CLS");
    cout << "Digite o valor:";
    cin>> v;
    cout << "Dobro = " << dobro(v) << endl;
    system("PAUSE");
    return EXIT_SUCCESS;
}

int dobro (int x)
{
    return(x*2);
}

