#include<stdio.h>
int main(){
    int a=12;

    if (a>60){
        printf("you can drive and you are senior citizen");

    }
    else if (a>40){
        printf("you  can drive and you are elder ");

    }
    else if (a>18){
        printf("you can drive as you are just above 18");
    }
    else{
        printf("you cannot drive as you are below 18");
    }
    return 0;
}