#include <stdio.h>
int main(){
    char arr[]="Coding for Life";
    int i=0;
    while(arr[i]!='\0'){
        printf("%c",arr[i]);
        i++;
    }
    return 0;
}