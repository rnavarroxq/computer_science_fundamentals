#include <iostream>
#include <cmath> 

using namespace std;

int main() {
    float cateto1,cateto2,hipotenusa;

    cout<<"Ingrese el valor del cateto 1:  ";
    cin>>cateto1;
    cout<<"Ingrese el valor del cateto2:  ";
    cin>>cateto2;
    
    hipotenusa= sqrt((cateto1*cateto1) + (cateto2*cateto2));
    //hipotenusa= sqrt(pow(cateto1,2) + pow(cateto2,2));

    cout.precision(2);

    cout<<"\El valor de la hipotenusa es: "<<hipotenusa<<endl;




    return 0;

}
