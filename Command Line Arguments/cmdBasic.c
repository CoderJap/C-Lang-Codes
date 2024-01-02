#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc , char* argv[]){

    int result =1;
    for(int i=1;i<argc;i++){
        int x = strtol(argv[i],NULL,10);
        result = result * x;


    }
    printf("Multiplication result is : %d\n", result);
    return 0;
}