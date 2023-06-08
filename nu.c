#include <stdio.h>
#include <stdlib.h>

int main (){
    int numero= 1;
    while (1 <= 500){
        int cuadrado = numero * numero;
        int cubonumero = numero * numero * numero;
        printf("%d,%d,%d," ,numero,cuadrado,cubonumero);
        numero ++;
    }
    system ("pause");
    return 0;


    

}