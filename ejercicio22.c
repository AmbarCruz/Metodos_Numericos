#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
    int len, i, j;
    char cad[10];

    printf("Introduce una palabra: ");
    scanf("%s", cad);
    len= strlen(cad);
    for (i=0; i<len; i++){
        for (j=0; j<len; j++){
            printf ("*\t");   
             }
        printf ("\n");    
        }
    return 0;
}