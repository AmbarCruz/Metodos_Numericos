#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    char cad[10];
    char cad2[10];
    char cad3[10];
    printf("Introduce la primera palabra: ");
    scanf("%s", cad);
    printf("Introduce la segunda palabra: ");
    scanf("%s", cad2);
    printf (" antes \n %s %s", cad, cad2 );
    strcpy (cad3, cad);
    strcpy (cad, cad2);
    strcpy (cad2, cad3);
    printf (" despues \n %s %s", cad, cad2);
    return 0;
}