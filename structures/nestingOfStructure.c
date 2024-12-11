#include<stdio.h>
#include<string.h>
int main(){
    typedef struct pokemon{
        int attack;
        int hp;
        int speed;
        char tier;
        char name[50];

    }normalpokemon ;

    typedef struct legendary {
        char ability [20];
        normalpokemon normalpowers;
    } legendpokemon;

    typedef struct god{
        int boost ;
        legendpokemon legendpowers ;

    }godpokemon;

    godpokemon arceus;

    arceus.boost =120;
    arceus.legendpowers.normalpowers.speed =100;

    legendpokemon mewtwo;
    strcpy(mewtwo.ability,"special power ");
    mewtwo.normalpowers.hp =60;


    printf("%d",arceus.legendpowers.normalpowers.speed);

}