#include <stdio.h>
#include <math.h>

#define EPSILON 0.00001

double function(double x) {
    // La función de ejemplo es f(x) = x^3 - 2x - 5
    int xx = pow(x,3);
    return  xx - (2 * x) - 5;
}

double bisection(double a, double b) {
    double *p_a = &a;
    double *p_b = &b;
    double c;

    while ((*p_b - *p_a) >= EPSILON) {
        // Encontrar el punto mediogcc
        c = (*p_a + *p_b) / 2;

        // Verificar si c es raíz
        if (function(c) == 0.0)
            break;

        // Actualizar los valores de a y b
        if (function(c) * function(*p_a) < 0)
            *p_b = c;
        else
            *p_a = c;
    }
    
    // Devolver el valor aproximado de la raíz
    return c;
}

int main() {
    double a = 1.0;  // Intervalo izquierdo
    double b = 2.0;  // Intervalo derecho
    double root = bisection(a, b);

    printf("La raíz aproximada es: %lf\n", root);

    return 0;
}