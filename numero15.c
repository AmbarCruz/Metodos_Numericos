#include <stdio.h>
#include <stdlib.h>
int main (){
   int num, i;
   int suma=0;
   printf("Introduce el numero \n");
   scanf ("%d", &num);

   for (i=1; i<=num; i++){
    suma = suma + i;
  }
   printf("La suma de numeros de 1 a %d, es: %d", num, suma);
   system("pause");
   return 0;
}