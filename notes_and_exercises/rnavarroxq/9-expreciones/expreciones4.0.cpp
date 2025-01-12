#include <iostream>
using namespace std;

int main() {
    float prac, teo, part,nota;

    cout<<"Ingrese su nota practica: ";
    cin>>prac;
    cout<<"Ingrese su nota teorica: ";
    cin>>teo;
    cout<<"Ingrese su nota de participacion: ";
    cin>>part;

    nota=(prac*0.30)+(teo*0.60)+(part*0.10);

    cout<<"Su nota final es: "<<nota<<endl;



    return 0;
}