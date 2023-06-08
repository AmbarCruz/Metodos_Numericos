#include <stdio.h>
#include <stdlib.h>
int main(){
    int calificacion;
    printf("Introduce la calificacion \n");
    scanf ("%d" , &calificacion);
    if (calificacion >=8){
        printf("Felicidades aprobaste el curso %d",calificacion);
    }else {
        printf("reprobaste");
    }
    system("pause");
    return 0;
}
