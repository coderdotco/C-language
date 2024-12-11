#include<stdio.h>
int rev(int a){
    if(a==0) return 0;
    return (a%10) + rev(a/10);
}
int main(){
    int n;
    printf("Enter the number :");
    scanf("%d",&n);
    int c=rev(n);
    printf("the sum of digits is %d",c);
}