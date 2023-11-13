#include <stdio.h>
#include <string.h>
#include <stdbool.h>

typedef struct pokemon{
    int attack;
    char tier;

} pokemon;
int main(){
    pokemon pikachu;
    pikachu.attack =50;
    pikachu.tier='S';
    pokemon* ptr =&pikachu;
    printf("%p\n",ptr);// first member ka address ayega which in this case is attack
    printf("%p",&pikachu.attack);


}