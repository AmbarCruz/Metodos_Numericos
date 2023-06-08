#include <stdio.h>
#include <stdlib.h>

int main() {
    int matriz[10][10];
    int *puntero;
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            matriz[i][j] = i + 1;
        }
    }
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            printf( "%d", matriz[i][j]);
            *puntero = &matriz[i][j];
            printf( "%d " "%d ", *puntero);
        }
        printf("\n");
           
    }
    return 0;
}