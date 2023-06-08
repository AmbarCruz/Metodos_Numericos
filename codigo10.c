#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int res;
    char cad[100];
    printf("Introduce la primera palabra: ");
    scanf("%s", cad);

    char palabra_invertida=cad;
    reverse(palabra_invertida,beigin(), palabra_invertida,end());

    if (cad==palabra_invertida){
        printf("La palabra es un palindromo");

    }else{ 
        printf("La palabra es un palindromo");
    }
    return 0;
}