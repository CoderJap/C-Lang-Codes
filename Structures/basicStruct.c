#include <stdio.h>
int main(){
    struct pokemon{ // user defined datatype 
        int hp;
        int speed;
        int attack;
        char tier;
    } mewtwo , charizard; // 


    struct pokemon pikachu ;
    pikachu.attack=60;
    pikachu.hp=50;
    pikachu.speed=100;
    pikachu.tier='A';

    printf("pikachu attack is: %d\n", pikachu.attack);
    printf("pikachu tier is: %c\n", pikachu.tier);

    mewtwo.attack=100;
    charizard.tier='S';
    printf("mewtwo attack is: %d\n",mewtwo.attack);
    printf("charizard tier is: %c" ,charizard.tier);





    return 0;
}