#include<stdio.h>
int main(){
    int a=4,b=5,c=3,d=1;
    if(a>b && a>c && a>d)
    printf("the greatet of all is a %d",a);
    else if (b>a && b>c && b>d )
    printf("the gretest of all is b %d",b);
    else if ( c>a && c>b && c>d)
    printf("the gretaet of all is c%d",c);
    else
    printf("the gretaest of all is d%d",d);

    return 0;
}