#include<stdio.h>
#include<math.h>
int main(){
    int a,n,count=0,c=0,b;
    printf("enter the number");
    scanf("%d",&a);
    n=a;

    while(n!=0)
    {
        n=n/10;
        count++;

    }
    n=a;
    while (n!=0)
    {
        b=n%10;
        printf("Digit: %d\n", b);
        c=c+ pow(b,count);
        printf("Current sum: %d\n", c);
        n=n/10;
    }
    if (c==a)
    printf("num is armstrong");
    else
    printf("not armstrong");
    return 0;
        
}