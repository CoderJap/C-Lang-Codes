#include <stdio.h>
#include <string.h>

int main(){
    struct book{
        char name[50];
        int noOfPages;
        float price;
    } a , b , c;

    a.noOfPages=200;
    a.price=478.67;
    strcpy(a.name ,"secret seven");

    printf("%d\n",a.noOfPages);
    printf("%f\n",a.price);
    printf("%s\n",a.name);

    strcpy(b.name , "Famous Five");
    printf("%s",b.name);




    return 0;

}