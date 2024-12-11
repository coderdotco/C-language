#include<stdio.h>
int power(int x,int y){
    if(y==0) return 1;
    return x*power(x,y-1);
}
int main(){
    int a,b;
    printf("enter the number a:");
    scanf("%d",&a);
    printf("\nenter the number b:");
    scanf("%d",&b);
    int c=power(a,b);
    printf("the power of %d of %d is %d",a,b,c);
    return 0;


}