#include <stdio.h>
#include <stdlib.h>
    int i[10], x;
    int f[10];
int main(void)
{
    printf("\t\tEntero\t\tFlotate\n\n");
    for(x=0; x<10; x++){
        printf("Elemento %d:\t%d\t\t%d\n", x, &i[x], &f[x]);

    }
    system("Pause");
}