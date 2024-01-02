#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(int argc , char* argv[]){
    FILE* ptr = fopen("cmd.txt", "w");
    if(ptr == NULL){
        perror("File not opened successfully");
        exit(1);
    }
    for(int i=1;i<argc;i++){
        fprintf(ptr , argv[i]);
    }
    return 0;
}