#include <stdio.h>
#include <stdlib.h>
int main (){
   int num, i, j;
   
   printf("Introduce el numero \n");
   scanf ("%d", &num);

   for (i=1; i<5; i++){
    for(j=1; j<5; j++){
        printf("%d \t", num+2*i+num+2*j);
    }
    printf("\n");

   }
   system("pause");
   return 0;
}