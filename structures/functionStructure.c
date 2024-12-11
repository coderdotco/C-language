#include<stdio.h>
#include<string.h>
//structure is a pass by value thing -matlab function ke andar value change karne se kio change nhi hoga

typedef struct pokemonis{
        int attack;
        int hp;
        int speed;
        char tier;
        char name[50];

    }pokemonis ;

void fun(pokemonis p);
void fun(pokemonis p){
    printf("%d",p.attack);
    return ;
}
int main(){
    pokemonis pikachu;
    pikachu.attack=60;
    fun(pikachu);

}