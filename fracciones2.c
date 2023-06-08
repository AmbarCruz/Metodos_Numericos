#include <stdio.h>
#include <stdlib.h>

int main (){
    double opa = 5;
    double opb = 2;
    double opc = 1;
    double opd = 4;
    double z;

    z = (opa+(opb/(opc/(opc+(opb/(opb-(opc/opd)))))));
    printf("el resultado es %f",z);
    system("pause");
    return 0;
}
