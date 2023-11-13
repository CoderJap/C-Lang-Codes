#include <string.h>


int main(){

    typedef struct pokemon{
        int hp;
        int attack;
        char tier;
        char name[15];

    } pokemon;

    pokemon arr[3];
    arr[0].attack =80;
    arr[0].hp =50;
    arr[0].tier ='A';
    strcpy(arr[0].name , "Charizard");

    arr[1].attack =350;
    arr[1].hp =250;
    arr[1].tier ='S';
    strcpy(arr[1].name , "Mewtwo");


    arr[2].attack =20;
    arr[2].hp =60;
    arr[2].tier ='B';
    strcpy(arr[2].name , "Pikachu");


    for(int i=0;i<3;i++){
        printf("Name:%s\n",arr[i].name);
        printf("Attack: %d\n",arr[i].attack);
        printf("Hp: %d\n",arr[i].hp);
        printf("Tier: %c\n\n",arr[i].tier);
        
    }


    return 0;

}