//Esto es un comentario
// ¿Qué es una libreria?
//Una librería es un conjunto de funciones que se pueden utilizar en un programa, fueron hechas 
//y se puede utilizr en cualquier programa que se desee

//Librería estandar de C
//Include = es incluir
//Studio= standar input output (Input =entrada, output = salida)
#include <stdio.h>

//Funcion principal
// Int= Integer (entero)
//main = principal
int main () {
//tipo de dato entero y creación de variable
int num = 2;
int num2= 4;
//crear num2
// variable donde guardaremos el resultado, la iniciamos en 0
int suma= 0;
//empleamos la asignacion de valor de la variable suma con la suma de num y num2
suma = num + num2;

//printf = Imorimir
// f = formato

printf("La suma de %d y %d es : %d", num, num2, suma);

return 0;

}
