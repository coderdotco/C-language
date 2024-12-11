#include<stdio.h>
int factorial (int n){
    if(n==0 || n==1 ) return 1;
    return n*factorial(n-1);
}
int main(){
    int n;
    printf("Enter the n :");
    scanf("%d",&n);
    int c=factorial(n);
    printf("the factorial is %d",c);
}