#include<stdio.h>
int main(){
    int n;
    printf("enter the number of lines :");
    scanf("%d",&n);
    int nst=n;
    int nsp=1;
    for(int i=1;i<=2*n+1;i++){
        printf("*");
    }
    printf("\n");
 
    for(int i=1;i<=n;i++){
        for(int j=1;j<=nst;j++)
        {
            printf("*");
        }
        for(int k=1;k<=nsp;k++)
        {
            printf(" ");
        }
        for(int j=1;j<=nst;j++)
        {
            printf("*");
        }
        if(i<(n/2)+1)
        {
            nst--;
            nsp+=2;
        }
        else
        {
            nst++;
            nsp-=2;
        }
        printf("\n");
    }
    for(int i=1;i<=2*n+1;i++)
    {
        printf("*");
    }

}