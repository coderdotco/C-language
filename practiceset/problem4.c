#include<stdio.h>

int main(){

    float p,r,t,a ;
    printf("write the princle amount");
    scanf("%f",&p);
    printf("write the rate of interets");
    scanf("%f",&r);
    printf("time");
    scanf("%f",&t);
    a=(p*r*t)/100;
    printf("si is =%f",a);
    return 0;

}