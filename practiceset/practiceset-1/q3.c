#include<stdio.h>
int main(){
    int i=2,sum=0;
    while(i<=100){
        sum=sum+i;
        i+=3;
    }
    printf("the sum of every third integer from 2 is %d",sum);
}