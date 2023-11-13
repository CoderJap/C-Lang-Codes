
#include<stdio.h>
#include<string.h>

typedef struct pokemon{
    int attack;
    char tier;

} pokemon;
int main(){
    pokemon pikachu;
    pikachu.attack =50;
    printf("%d\n",pikachu.attack);
  
    pokemon* x =&pikachu;
    (*x).attack=70; //pikachu.attack =70
    printf("%d",pikachu.attack);
}