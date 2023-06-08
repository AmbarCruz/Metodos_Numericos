#include <csdio>
#include <csdlib>

int main(){
    int num=1;
    char* p = 
    reinterpret_cast<char*>(&num);
    if(*p == 1){
    printf("La arquitectura es little-endian.");
    }else{
       printf("La arquitectura es big-endian."); 
       }
    return 0;
}