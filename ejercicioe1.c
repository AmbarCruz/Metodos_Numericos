//Crear un programa en c que reciba por teclado n y que arroje la tabla de multiplicar de ese numero c
//con apuntadores 
#include <stdio.h>
#include <stdlib.h>

int main(){
int*M,*N;
printf("Ingresa dos nuneros separados por un espacio: ");
scanf("%d" "%d", &M, &N);
for(int i = M; i <= N; i++){
    for(int j=1; j<= 10; j++){
        printf( "%d ", i*j); 
    } 
    printf("\n");
}
    return 0;

}