#include <iostream> 
using namespace std;

int main() {

    float precio,iva,preciofin;

    cout<<"¿Cual es el precio de su producto?: ";
    cin>>precio;

    iva= precio*0.16;
    preciofin= precio+iva;
    
    cout<<"El precio final de su producto es: "<<preciofin<<endl;

    return 0;
}