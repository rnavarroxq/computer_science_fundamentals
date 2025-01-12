#include <iostream>
using namespace std;

int main() {
    float a,b, resultado;
    cout<<"Ingrese el valor de a: ";
    cin>>a;
    cout<<"Ingrese el valor de b: ";
    cin>>b;
    resultado= (a/b)+1;

    cout.precision(2);
    cout<<"El resultado es: "<<resultado<<endl;



    return 0;
}