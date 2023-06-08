#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char cad[100];
    char cad2[100];

    printf("Introduce la primera palabra: ");
    scanf("%s", cad);
    printf("Introduce la segunda palabra: ");
    scanf("%s", cad2);

    int n = strlen(cad);
    for (int i= 0; i < n; i++){
    strcat(cad, cad2);
    }

    printf("tu resultado es: %s", cad);
}