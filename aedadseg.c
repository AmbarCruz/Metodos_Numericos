# include <stdio.h>
# include <stdlib.h>

int main(){
    int edad = 20;
    int min = 60;
    int hrs = 60;
    int dia = 24;
    int año = 365;

    int segundos = edad*min*hrs*dia*año;

    printf ("Los segundos que has vivido son: %d/n",segundos);

    return 0;

}