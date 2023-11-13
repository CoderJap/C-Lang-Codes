#include <stdio.h>


// typedef oldname newname ; to rename datatypes 
typedef float decimalNumber;

int main(){
    typedef struct number{
        decimalNumber decimal;

    } Jap;


    Jap a2;
    struct number a1;

    a1.decimal=23.69;
    a2.decimal=77.07;
    printf("%.3f\n",a1.decimal);
    printf("%.3f\n",a2.decimal);


    return 0;


}
