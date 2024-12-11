#include<stdio.h>
int main(){
    float  n,sum=0;
    printf("Enter the n number :");
    scanf("%f",&n);
    for(float i=1;i<=n;i++){
        sum=sum+1/i;
    }
    printf("the sum is %f ",sum);
}