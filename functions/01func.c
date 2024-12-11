#include<stdio.h>
//function prototype
int  sum(int,int);
//function defenation
int sum(int x,int y){
    printf("the sum is %d",x+y);
    return x+y;
    

}
int main(){
    int a;
    int b;
    printf("enter the two numbers :");
    scanf("%d%d",&a,&b);
    int c=sum(a,b);
    printf("\nreturn value is %d",c);
}