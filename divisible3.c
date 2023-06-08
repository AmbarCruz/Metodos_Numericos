#include <stdio.h>
#include <stdlib.h>

int main(){
    int num = 3;
    while(num < 1000){
        if(num % 3 == 0){
            printf("%d", num);
        }
        num += 3;
    }
    return 0;
}