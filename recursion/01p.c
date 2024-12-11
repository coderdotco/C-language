#include<stdio.h>
int factorial(int x){
    if (x==1 || x==0 ) return 1; //base case
    return x*factorial(x-1);
}
int main(){
    int n;
    printf("enter a number :");
    scanf("%d",&n);
    int fact=factorial(n);
    printf("factorial=%d",fact);
    return 0;

}