#include <stdio.h>
#include <stdlib.h>

int main(){
    int arreglo[100];
    int i = 0;
    while(i<100){
        arreglo[i++] = (i)*2;
    }
    i=0;
    while(i<100){
        printf("%d" ,2 * (i+1));
        printf("%d" " = ", arreglo[i++]);
    }
    return 0;
}