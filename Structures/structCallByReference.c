
#include<stdio.h>
#include<string.h>

typedef struct pokemon{
    int hp;
    int attack;
    char tier;
    char name[10];

} pokemon;

void change(pokemon* p); // function prototype -> when u have to write this func below the int main so pehle yaha pe aise prototype bnaoo !!

int main(){
    pokemon pikachu = {10,50,'S',"Pikachu"}; // Another way of initializing the structure variables while declaring reduces other extra lines but write in order of above 

    // pikachu.hp=10;
    // pikachu.attack =50;
    // pikachu.tier='S';
    // strcpy(pikachu.name ,"Pikachu");

    printf("%d\n",pikachu.hp);
    printf("%d\n",pikachu.attack);
    printf("%c\n",pikachu.tier);
    printf("%s\n\n",pikachu.name);

    change(&pikachu); // pass by reference 

    printf("%d\n",pikachu.hp);
    printf("%d\n",pikachu.attack);
    printf("%c\n",pikachu.tier);
    printf("%s\n",pikachu.name);
}

void change(pokemon* p){
    // (*p).hp=100; instead of *bracket we can use arrow
    p->hp=90;
    p->attack=100;
    p->tier='A';
    strcpy(p->name , "Raichu");
}
