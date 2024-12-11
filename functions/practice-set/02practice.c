#include<stdio.h>
float celc(int );
float celc(int a){
    float far=a*(9/5)+32;
    return far;
}
int main(){
    int x=32;
    printf("the temperatire in farhinte is %f",celc(x));
}