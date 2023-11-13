// wap to take n number of integers as input and display them

#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;
    printf("Enter numbers of integers u want :");
    scanf("%d",&n);
    // int arr[n];
    // for(int i=0;i<n;i++){
    //     scanf("%d",&arr[i]);
    // }
    // for(int i=0;i<n;i++){
    //     printf("%d",arr[i]);
    // }

    int* ptr = (int*) malloc(n*sizeof(int));
    int* p=ptr;
    for(int i=1;i<=n;i++){
        scanf("%d",&(*ptr));
        ptr++;
    }
    printf("Entered integers are :\n");
    int* t=p;
    for(int i=1;i<=n;i++){
        printf("%d\n",(*p));
        p++;
    }


}