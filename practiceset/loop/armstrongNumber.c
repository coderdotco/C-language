#include<stdio.h>
int main(){
    int n;
    printf("enter the number :");
    scanf("%d",&n);
    int a=n;
    int rem,rev=0;
    while(a>0){
        rem=a%10;
        rev=rem*rem*rem +rev ;
        a=a/10;
    }
    if(rev==n) printf("armstrong number");
    if(rev!=n ) printf("not armstrong number");

}