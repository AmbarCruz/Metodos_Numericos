#include <stdio.h>
#include <stdlib.h>

int main(){
    float horass;
    float precio;
    float salario;

    printf("Introduce las horas trabajadas \n");
    scanf ("%f" , &horass);

    printf ("Ingresa el precio por hora \n");
    scanf ("%f" , &precio);
    if (horass <=40){
        salario = horass * precio;
    }else{
        salario = 40 * precio + (horass - 40)* precio * 1.5;
    }
    printf("El salario semanal es; $ %f", salario);
    
    return 0;
}