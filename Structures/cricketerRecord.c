// A record contains name of cricketer , his age , number of test matches 
// that he has played and the average runs that he has scored 
// in each test match . Create an array of structure to hold 
// records of 20 such cricketer and then write a progarm to read 
// these records 

#include <stdio.h>
int main(){

    typedef struct cricketer{
        char firstName[20];
        char lastName[20];
        int age;
        int noOfMatches;
        float average;

    } cricketer;

    // inputting 3 cricketer records
    cricketer arr[3];
    for(int i=0;i<3;i++){
        scanf("%s",arr[i].firstName);
        scanf("%s",arr[i].lastName);
        scanf("%d",&arr[i].age);
        scanf("%d",&arr[i].noOfMatches);
        scanf("%f",&arr[i].average);
    }

     for(int i=0;i<3;i++){
        printf("Name of Cricketer: %s %s\n", arr[i].firstName , arr[i].lastName);
        printf("No. of matches played: %d\n",arr[i].noOfMatches);
        printf("Age: %d\n",arr[i].age);
        printf("Average: %.3f\n\n",arr[i].average);
    }

}