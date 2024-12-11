#include<stdio.h>
int sum(int x,int n){
    
    if(n==0){
        printf("%d",x);
        return 1;
    }
    sum(x+n,n-1);
    return 1;   
}
int main(){
    int n;
    printf("enter the limit :");
    scanf("%d",&n);
    sum(0,n);
}