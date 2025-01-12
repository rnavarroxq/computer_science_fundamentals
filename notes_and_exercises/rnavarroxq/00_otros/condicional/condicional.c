#include <stdio.h>

int main () {
int num = 0;
int num2  = 0;
int suma = 0;
int resta = 0;

// Pedir al usuario que ingrese un numero

printf ("Ingrese un numero: ");
//guardar el numero
//scan = escanear
//f = formato
scanf ("%d", &num);
// pedir al ususario que ingrese el numero 2
printf ("Ingrese otro numero: ");
//guardar el num 2
scanf ("%d", &num2);
printf ("1. Sumar\n");
printf ("2. Restar\n");
printf ("Ingrese la opcion: ");
int opcion = 0; // EL SIMBOLO = ES ASIGNACION
scanf ("%d", &opcion);
// condicional
 if (opcion== 1) { // si se cumple lo que este dentro de estos corchetes es lo que se va a ejecutar
 suma = num + num2;
 printf (" La suma de %d y %d es: %d", num, num2, suma);
 }
 else { //si no se cumple la condicion
  //se ejecuta lo que este dentro de estos corchetes
resta = num - num2;
printf (" La resta de %d y %d es: %d", num, num2, resta);

 }
//el simbolo == es comparacion


    return 0;
}