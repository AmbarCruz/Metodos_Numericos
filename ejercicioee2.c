//Crear un programa en C que dibuje una matriz de 10 x 10
//y que obtenga los muliplicativas de posicion con apuntadores
#include <stdio.h>
#include <stdlib.h>
int main() {
    int matriz[10][10];
    int *puntero;    
   // Llenar la matriz con valores del 1 al 10
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            matriz[i][j] = (i + 1)* (j+1);
        }
    }

    // Imprimir la matriz y los valores multiplicativos
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            printf("%d\n ", matriz[i][j]);
            *puntero = &matriz[i][j];
        
        }
        printf("\n");
    }
    return 0;
}