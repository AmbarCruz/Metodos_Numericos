#include <stdio.h>
#include <stdlib.h>

int main(){
    char cadena [10];
    printf ("Un int ocupa %d byte", sizeof(int));
    printf ("Un char ocupa %d byte", sizeof(char));
    printf ("Un float ocupa %d byte", sizeof(float));
    printf ("Un double ocupa %d byte", sizeof(double));
    printf ("Cadena ocupa %d byte", sizeof(cadena));
}