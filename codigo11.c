#include <stdio.h>
#include <stdlib.h>

int main(){
    int x=17, y;
    int*p;
    p = &x;
    printf("El valor de x es: %d", *p);
    y =*p+3;
    printf(" el valor de y es: %d ", y); 
    system ("pause");
}