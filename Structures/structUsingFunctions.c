
// structure variable can be passes to a function

#include <stdio.h>
#include <string.h>
#include <stdbool.h>

// to globally declare a structure usse int main ke bahar likho so that we can pass it in any user made functions 

typedef struct pokemon {
    int hp;
    int attack;
    char tier;

} pokemon;

void fun(pokemon p){
    printf("%d\n",p.hp);
    printf("%d\n",p.attack);
}
void change(pokemon p){ // this will make a copy and change the values in it like pass by value
     p.hp=70;
     p.attack=200;
     return;
}
int main(){
    pokemon pikachu;
    pikachu.hp=50;
    pikachu.attack=70;
    // fun(pikachu);
    change(pikachu); // after this also values will be same as pass by value happens in structures 
    printf("%d\n",pikachu.attack);
    printf("%d\n",pikachu.hp);



}