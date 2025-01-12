#include <iostream>
using namespace std;

int main() {
    float cal1,cal2,cal3,cal4,media;

    cout<<"Digite la nota del primer alumno: ";
    cin>>cal1;
    cout<<"Digite la nota del segundo alumno: ";
    cin>>cal2;
    cout<<"Digite la nota del tercer alumno: ";
    cin>>cal3;
    cout<<"Digite la nota del cuarto alumno: ";
    cin>>cal4;

    media=(cal1+cal2+cal3+cal4)/4;

    cout<<"\nLa media es: "<<media<<endl;




    return 0;
}