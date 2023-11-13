#include <stdio.h>

#define PI 3.14159265359
#define Area(r) (PI*r*r)

int main(){
    float x= Area(3);
    printf("%f", x);
}