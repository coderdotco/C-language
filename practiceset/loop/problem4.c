#include<stdio.h>
int main(){
    int i=0;
    int n=8,a=0;
    while(i<11)
    {
       a=a+n*i;
       i++; 
    }
    printf("%d",a);
    return 0;
}