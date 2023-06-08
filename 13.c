#include <stdio.h>
#include <stdlib.h>

int main(void){
    func();
    int y;
    y=*p;
    *p=25;
    printf("El valor de y es: %d \nEl valor de *p es %d \nEl valor dep es %p", y, *p, p); 
    system ("pause");
}