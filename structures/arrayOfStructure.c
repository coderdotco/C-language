#include<stdio.h>
#include<string.h>
int main(){
    typedef struct pokemon{
        int attack;
        int hp;
        int speed;
        char tier;
        char name[50];

    }pokemonis ;

    pokemonis arr[3]; //structure ka array
    //input
    for(int i=0;i<3;i++){
        printf("name=");
        scanf("%s",arr[i].name);
        printf("attack=");
        scanf("%d",&arr[i].attack);
        printf("hp=");
        scanf("%d",&arr[i].hp);
        printf("speed=");
        scanf("%d",&arr[i].speed);
        printf("tier=");
        scanf(" %c",&arr[i].tier);
        printf("\n");
    }
    //output
    for (int i = 0; i < 3; i++)
    {
        printf("\n%s",arr[i].name);
        printf("\nattack : %d",arr[i].attack);
        printf("\nhp : %d",arr[i].hp);
        printf("\nspeed : %d",arr[i].speed);
        printf("\ntier : %c",arr[i].tier);
    }
    

}