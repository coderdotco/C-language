#include<stdio.h>
void addnum(int);
int main(){
    int n;
    printf("Enter the nth number till you want to add :");
    scanf("%d",&n);
    addnum(n);
}
void addnum(int a){
    int sum=0;
    for(int i=1;i<=a;i++){
        sum=sum+i;
    }
    printf("The sum till %dth number is %d",a,sum);
}