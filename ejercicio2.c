#include <stdio.h>
#include <stdlib.h>

int main() {
    double operacion = 5 + 2 / (1 / (1 + 2 / (2 - 1.0 / 4))); 
    printf("Resultado: %f ", operacion); 
    system ("pause");
    return 0;
}
