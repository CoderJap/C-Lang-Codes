// feature of structure - nesting is possible 

#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main(){
    typedef struct pokemon{
        int hp;
        int attack;
        char tier;
        char name[15];


    }pokemon;

    typedef struct legendarypokemon{
        pokemon normal;
        char ability[100];
    } legendarypokemon ;

    typedef struct godpokemon{
        legendarypokemon legend;
        int specialAttack;
    } godpokemon;

    godpokemon arceus;
    arceus.specialAttack = 300;
    strcpy(arceus.legend.ability , "Turns Anyone to Stone");
    arceus.legend.normal.hp = 25;

    legendarypokemon mewtwo;
    strcpy(mewtwo.ability , "Pressure");
    mewtwo.normal.attack=150;
    strcpy(mewtwo.normal.name , "MewTwo");
    printf("%d\n", mewtwo.normal.attack);
    printf("%s\n",mewtwo.normal.name);
    printf("%d\n",arceus.legend.normal.hp);
    printf("%s\n",arceus.legend.ability);
    printf("%d", arceus.specialAttack);
    }
