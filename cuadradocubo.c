#include <stdio.h>
#include <stdlib.h>

int main(){
    int i = 1;
    while(i <= 500){
        int cuadrado = i * i;
        int cubo = i * i*i;
        printf(" Numero: %d/n " , i);
        printf(" Cuadrado: %d/n", cuadrado);
        printf(" Cubo: %d/n", cubo);
        i++;
    }
    return 0;
}