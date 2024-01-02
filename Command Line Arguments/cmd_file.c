#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>

int main(int argc , char*argv[]){
    if(argc!=2){
        perror("not enough arguments enetered");
        exit(1);
    }

    FILE* ptr=fopen(argv[1],"w");
    if(ptr == NULL){
        perror("File not opened successfully");
        exit(1);
    }
    fprintf(ptr , "godxjap on god mode no cap");
    return 0;

}