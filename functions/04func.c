#include<stdio.h>
int fact(int);
int fact(int n){
    if(n==1 || n==0){
        return 1;
    }
    return fact(n-1)*n;
}
int main(){
    int a=7;
    printf("the factorial of %d is %d ",a,fact(a));
}