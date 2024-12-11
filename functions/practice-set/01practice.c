#include<stdio.h>
float avg(int,int ,int);
float avg(int x,int y,int z){
    float a=(x+y+z)/3.0;
    return a;
}
int main(){
    int a,b,c;
    printf("enter the three numbers :");
    scanf("%d%d%d",&a,&b,&c);
    float d=avg(a,b,c);
    printf("\nthe avg of three numbers is %f",d);
}