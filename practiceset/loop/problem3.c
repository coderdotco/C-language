#include<stdio.h>
/*int main(){
    int n=0;
    int i;
    for ( i = 0; i < 11; i++)
    {
        n=n+i;      
    }
    printf("%d",n);
    
}*/

int main(){
    int n=0;
    int i=0;
    do
    {
        n=n+i;
        i++;
    } while (i<11);
    printf("%d",n);
}