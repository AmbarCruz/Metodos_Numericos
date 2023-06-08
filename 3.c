#include <stdlib.h>
#include <cstdio.h>

int maximo(int a, int b) {
    return (a > b) ? a : b;
}

int main() {
    int x = 30;
    int y = 500;
    int max = maximo(x, y);
    printf("El máximo entre %d y %d es= %d\n", x, y, max);
    return 0;
}