#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double calcular_area_triangulo(double a, double b, double c) {
    double p = (a + b + c) / 2.0;
    double area = sqrt(p * (p - a) * (p - b) * (p - c));
    return area;
}

int main() {
    double a, b, c;
    printf("Ingresa las longitudes de los lados del triángulo (separados por espacio): ");
    if (scanf("%lf %lf %lf", &a, &b, &c) != 3) {
        fprintf(stderr, "Error: Entrada inválida\n");
        return 1;
    }
    double area = calcular_area_triangulo(a, b, c);
    printf("El área del triángulo es: %lf\n", area);
    return 0;
}
