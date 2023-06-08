#include <stdio.h>
#include <stdlib.h>
int main(){
    int años;
    int sueldo;
    int por;
    printf("Introduce los años de antiguedad \n");
    printf("Sueldo mensual \n");
    scanf ("%d" "%d" , &años, &sueldo);
    por =(sueldo*.10);
    if (años >= 5 && por >=1000){
        printf("Felicidades  ");
    }
    if (años < 5 || por < 1000) {
    
    printf("Credito negado, no cumples con las cosas ");
    }
    system("pause");
    return 0;
}