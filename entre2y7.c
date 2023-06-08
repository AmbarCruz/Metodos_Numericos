#include <stdio.h>
#include <stdlib.h>

int main(){
    int num = 1;
    while(num < 1000){
        if(num % 2 == 0 && num % 7 == 0){
            printf("%d ", num);
        }
        num ++;
    }
    return 0;
}