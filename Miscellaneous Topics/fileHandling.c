#include <stdio.h>
#include <stdlib.h>

int main(){
    // FILE* ptr = fopen("jap.txt","r");
    // char str[100];
    // while(fgets(str,100,ptr)!=NULL)
    //     printf("%s",str);

    // creating a file 
    FILE* ptr = fopen("new.txt","w");
    char str[]="DSA is Love";
    fputs(str,ptr);
    fclose(ptr);
}