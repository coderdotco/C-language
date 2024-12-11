#include<stdio.h>
int ncr(int ,int);
int fact(int);
int main(){
    int n;
    int r;
    printf("Enter the N :");
    scanf("%d",&n);
    printf("Enter the R :");
    scanf("%d",&r);
    int ncr1=ncr(n,r);
    printf("The NCR value of N=%d and R=%d is %d",n,r,ncr1);
}
int ncr(int n,int r){
    return fact(n)/(fact(r)*fact(n-r));
}
int fact (int a){
    int factorial=1;
    for(int i=1;i<=a;i++){
        factorial=factorial*i;
    }
    return factorial;
}