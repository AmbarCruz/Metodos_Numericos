#include <stdio.h>
#include <stdlib.h>

int main (){
   int longi = 50;
   int i;
   for (i = 1; i<(longi/2); i++){
    printf("%d, ", 2*i);
    printf("%d, ", 3*i);
   }
}