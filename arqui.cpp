#include <cstdio>
#include <cstdlib>

int main(){
    int num=1;
    char* p = reinterpret_cast<char*>(&num);
    if(*p == 0){
    printf("La arquitectura es little-endian.c");
    }else{
       printf("La arquitectura es big-endian."); 
       }
    return 0;
}