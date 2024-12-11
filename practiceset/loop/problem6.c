#include<stdio.h>
int main(){
    int a;
    int i=2;
    int notprime=0;
    printf("enter :");
    scanf("%d",&a);
    
    
    while(i<a)
    {
        if(a%i==0)
        notprime=1;
        printf("%d\n",i);
        
        i++;

    }
    if(notprime)
    printf("%d not prime\n",a);
    else
    printf("%d is prime",a);
    return 0;

}