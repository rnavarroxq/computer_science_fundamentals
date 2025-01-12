#include <iostream>
using namespace std;

int main () {

    float pract,teo,part, nota;
    cout<<"Ingrese su nota de practica: ";
    cin>>pract;
    cout<<"Ingrese su nota teorica: ";
    cin>>teo;
    cout<<"Ingrese su nota de participacion: ";
    cin>>part;

    pract*=0.30;
    teo*=0.60;
    part*=0.10;

    nota=pract+teo+part;
     
    
    cout<<"\nSu nota final es: "<<nota<<endl;




    return 0;
}