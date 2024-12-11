#include<stdio.h>
void simpleinterest(int ,int ,int);
int main(){
    int p,r,t;
    printf("enter the principle amount :");
    scanf("%d",&p);
    printf("\nenter the rate of interest :");
    scanf("%d",&r);
    printf("\nenter the time in years :");
    scanf("%d",&t);
    simpleinterest(p,r,t);
}
void simpleinterest(int a,int b,int c){
    float interest;
    interest=a*b*c*0.01;
    printf("\nThe simple interest is %.2f",interest);

}