#include <iostream>
using namespace std;
int main()
{
    int n1=0,n2=0,resultado=0;
    cout<<"Ingrese un numero: ";
    cin>> n1;
    cout<<"Ingrese otro numero: ";
    cin>> n2;
    resultado=n1+n2;
    cout<<"Suma de "<<n1<<" y "<<n2<<" : "<<resultado<<endl;
    resultado=n1-n2;
    cout<<"Resta de "<<n1<<" y "<<n2<<" : "<<resultado<<endl;
    resultado=n1*n2;
    cout<<"Multiplicacion de "<<n1<<" y "<<n2<<" : "<<resultado<<endl;
    resultado=n1/n2;
    cout<<"Division de "<<n1<<" y "<<n2<<" : "<<resultado<<endl;
    return 0;
}