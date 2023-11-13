// feature of structures - deep copy is created here 

#include <stdio.h>
#include <string.h>

int main() {

    struct pokemon{
        int hp;
        int attack;
        char tier;
        char name[15];

    } a,b,c;

    a.attack=50;
    a.hp=60;
    a.tier='S';
    strcpy(a.name , "Blastoise");

    // b.attack=a.attack
    // b.hp=a.hp
    // b.tier=a.tier
    // strcpy(b.name,a.name)

    b=a;//copying a into b simply with one line instead of writing above 4 lines
    printf("%d\n",b.attack);
    c=a;
    printf("%s\n",c.name);

}
