#include <cstdio>
#include <cstdlib>

int main(){
    int num=1;
    char* p = reinterpret_cast<char*>(&num);
    if(*p == 0){
    printf("La arquitectura es little-endian.\n");
    }else{
       printf("La arquitectura es big-endian.\n"); 
       }
    return 0;
}