// Create a structure date that contains three memebers namely date , month and year
// Create 2 structure variables with different dates and now compare the two
//If the dates are equal then display message as "Equal" otherwise "Unequal"

#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main(){

    typedef struct date{
        int day;
        int month;
        int year;
    } date;
    date a,b;
    // a->5/12/1999
    // b->19/1/2023
    a.day =5;
    a.month=12;
    a.year=1999;

    b.day=5;
    b.month=12;
    b.year=1998;

    // if(a==b)-> error while executing
    // do this then 

    bool flag = true;
    if(a.day!=b.day) flag=false;
    if(a.month!=b.month) flag=false;
    if(a.year!=b.year) flag=false;

    if(flag==true){
        printf("Dates are Same");
    }
    else{
        printf("Dates are Different ");
    }





}