// create a structure to specify data on students with these attributes : roll number  , name , department , course , year of joining 
// create 2 structure variables . 
// Now create a func to check if two students have the same department 
// Pass the two structure variables as input to this function .

#include <string.h>
#include<stdio.h>
#include <stdbool.h>

typedef struct student{
    int rno;
    char name[20];
    char dept[20];
    char course[20];
    int yearOfJoining;
    char DEPT;

} student;

bool checkDept(student a , student b){
    if(a.DEPT==b.DEPT)
    return true;
    else
    return false;
}
int main(){
    student s1,s2;
    s1.DEPT='A';
    s2.DEPT='A';
    // strcpy(s1.dept,"Coding");
    // strcpy(s2.dept ,"Coding");
    if(checkDept(s1,s2)){
        printf("Departments are Same");
    }
    else{
        printf("Departments are different");
    }
    return 0;
}