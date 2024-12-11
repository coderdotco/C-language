#include<stdio.h>
int main(){
    int n;
    int sum=0;
    printf("Enter the limit :");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        if(i%2!=0) sum=sum+i;
    }
    printf("The sum of odd numbers till %d is %d",n,sum);
}