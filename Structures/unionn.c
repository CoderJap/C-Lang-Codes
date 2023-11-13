
#include<stdio.h>
#include<string.h>

typedef union pokemon{ // in union sab kuch same rhega bas at a time we can access one member unlike structure
     
    int hp;
    int attack;
    char tier;
    char name[10];

} pokemon;

int main(){
    pokemon pikachu ;

    pikachu.hp=10;
    pikachu.attack =50;
    pikachu.tier='S';
    // strcpy(pikachu.name ,"Pikachu");

    printf("%d\n",pikachu.hp);
    printf("%d\n",pikachu.attack);
    printf("%c\n",pikachu.tier);
    // printf("%s\n\n",pikachu.name);

    // sirf ek hi access hoga and voh last wala valid rhega baaki garabge value aayegi 



}

