#include <string.h>
#include <stdio.h>

int main(){
    char s1[]="Japjot";
    char s2[20];
    strcpy(s2,s1);  // - Deep copy 
    printf("s2 is : %s",s2);

    int x=strlen(s1); // to get length
    printf("%d",x);
    return 0;


}