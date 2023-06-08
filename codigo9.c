#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){

    int res;
    char cad[100], cad2[100];
    printf("Introduce la primera palabra: ");
    scanf("%s", cad);
    printf("Introduce la segunda palabra: ");
    scanf("%s", cad2);
    res = strcmp( cad, cad2 );

    if (res ==0){
        printf("son iguales ");
    }else if (res<0){
        printf("es menor que la palabra 2");
    }else {
        printf("es mayor que la palabra 2");

    }
    system("pause");
    return 0;
        


}