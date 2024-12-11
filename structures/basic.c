#include<stdio.h>
int main(){
    struct pokemon{
        int hp;
        int attack;
        char tier;
    };

    struct pokemon pikachu ;
    pikachu.attack =60;
    pikachu.hp = 100;
    pikachu.tier ='A';

    struct pokemon bulbasor ;
    printf("enter the attack of bulbasor :");
    scanf("%d",&bulbasor.attack);
    bulbasor.hp =100;
    bulbasor.tier ='B';

    printf("%d",bulbasor.attack);
    printf("\n%c",bulbasor.tier);
    
    return 0;

}