#include<stdio.h>
int sum(int n){
    if(n==1) return 1;
    return n +sum(n-1);
}
int main(){
    int n;
    printf("enter the number :");
    scanf("%d",&n);
    int add=sum(n);
    printf("the sum is %d",add);
}