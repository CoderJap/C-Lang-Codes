#include <stdio.h>
#include <stdlib.h>

int main(){
    int* ptr = (int*) calloc(10,4);
    int* p=ptr; // p ko starting pe set krdiya 
    ptr++;
    free(p);
}