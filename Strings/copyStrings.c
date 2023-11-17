#include <stdio.h>
#include <string.h>

int main(){
    char s1[]="Japjot";
    char* s2=s1;
    s1[0]='M';
    printf("%s",s2); //Change hoga - Shallow Copy 


    return 0;

}