#include<iostream>
#include <cmath>
using namespace std;

int main(){
    float a,b,c, resultado1=0, resultado2=0,a4;

    cout<<"Ingrese el valor de a: ";
    cin>>a;
    cout<<"Ingrese el valor de b: ";
    cin>>b;
    cout<<"Ingrese el valor de c: ";
    cin>>c;

    a4=4*a;
    resultado1= (-b+sqrt(pow(b,2)-(a4*c)) )/ 2*a;
    resultado2= (-b-sqrt(pow(b,2)-(a4*c)) )/ 2*a;

    cout<<"El resultado 1 es: "<<resultado1<<endl;
    cout<<"El resultado 2 es: "<<resultado2<<endl;

    cout<<"comprobacion: "<<a*pow(resultado1,2) + b*resultado1 + c<<endl; 
    cout<<"comprobacion: "<<a*pow(resultado2,2) + b*resultado2 + c<<endl; 

    return 0;
}