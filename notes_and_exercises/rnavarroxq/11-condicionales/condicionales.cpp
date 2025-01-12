//sentencia if
//if (concicion) {instruccion 1};
//else {instruccion 2};

#include <iostream>
using namespace std;

int main () {

int numero, dato=5;
    cout<<"Ingrese un numero: ";
    cin>>numero;
    
if (numero<=dato)  {
    cout<<"El numero es menor o igual a 5";
}

else {
    cout<<"El numero es mayor a 5";
}


    return 0;
}
