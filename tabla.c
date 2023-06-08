#include <stdio.h>
#include <stdlib.h>

int main(){
    int i;
    int j;
    int M;
    printf("ingresa el numero");
    scanf("%d",&M);
    int N;
    printf("insertar numero 2");
    scanf("%d",&N);

    for (i=1; i<1; i<=M, j++){
        for ( j=1; j<=N; j++){
            printf("%d \t", i*j);

        }
        printf("\n");

    }
    system("pause");
    return 0;
}
