#include<stdio.h>
#include<string.h>
// struct is a pass by value thing so we have to use pointers 

//struct ke jahag agar union likhe to union khali one member at a time access karega while struct sare members
//union ka aur struct ka syntax same hai
// typedef union pokemonis{
//         int attack;
//         int hp;
//         int speed;
//         char tier;
//         char name[50];

//     }pokemonis ;

typedef struct pokemonis{
        int attack;
        int hp;
        int speed;
        char tier;
        char name[50];

    }pokemonis ;

void fun(pokemonis* p){   // just like  int* x we used  pokemonis* p as int has been replaced by pokemonis 
    (*p).attack =70;    // now (*p).something ke jagah hum p->something bhi use kar sakte hai for pointers
    p->hp =170;
    p->speed=120;         // (*p).something = p->something
    p->tier ='S';
    strcpy(p->name ,"raichu");
}

int main(){
    pokemonis pikachu;
    // another way to inatialize is directly intizalising with declaring like arrays
    // but the fact is in this way we have to initailse in order wise only 
    //pokemonis pikachu ={ 60 ,100 ,100 ,'A',"pikachu dot com "};
    pikachu.attack =60;
    pikachu.hp =100;
    pikachu.speed =100;
    pikachu.tier ='A';
    strcpy(pikachu.name , "pikachu");
    
    fun(&pikachu); //just like fun(&x) we used &pikachu so that adress of pikachu goes 

    printf("\n%d",pikachu.attack);
    printf("\n%d",pikachu.hp);
    printf("\n%d",pikachu.speed);
    printf("\n%c",pikachu.tier);
    printf("\n%s",pikachu.name);
}