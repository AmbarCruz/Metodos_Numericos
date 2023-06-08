#include <stdio.h>
#include <stdlib.h>

int main(){
    int num = 1;
    while(num < 100){
        if(num % 7 != 0){
            printf("%d ", num);
        }
        num ++;
    }
    return 0;
}