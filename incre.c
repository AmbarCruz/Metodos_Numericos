#include <stdio.h>
#include <stdlib.h>

int main(){

int N;
printf ("Introduzca un N");
scanf("%d", &N);
for(int i =1; i<=N; i++){
    for(int j= 1; j <= N; j++){
        if(j <= N-i){
            printf(" * ");
        }else{
            printf(" = ");
        }
    }
  
}


    return 0;
}