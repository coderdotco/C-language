#include<stdio.h>
int main(){
    int n,rem,rev=0;
    printf("Enter the number :");
    scanf("%d",&n);
    while (n>0){
        rem=n%10;
        rev=rem+ rev *10;
        n=n/10;
    }
    printf("the reverse of the number is %d", rev);
}