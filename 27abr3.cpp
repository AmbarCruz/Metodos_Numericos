#include <stdio.h>
#include <stdlib.h>

int main() {
    int x;
    printf("Ingrese el tamaño del arreglo: ");
    scanf("%d", &x);

    int* arreglo = (int*) malloc(x * sizeof(int));
    if (arreglo == NULL) {
        printf("Error al asignar memoria\n");
        exit(1);
    }

    printf("Ingrese los valores del arreglo:\n");
    for (int i = 0; i < x; i++) {
        scanf("%d", &arreglo[i]);
    }

    printf("Los valores del arreglo son:\n");
    for (int i = 0; i < x; i++) {
        printf("%d ", arreglo[i]);
    }
    printf("\n");

    free(arreglo);
    return 0;
}