#include<stdio.h>
int main(){
    int nsp=1;
    int n;
    printf("enter the lines :");
    scanf("%d",&n);
    int nst=n;
    for(int i=1;i<=2*n+1;i++){
        printf("*");
    }
    printf("\n");
    for(int i=1;i<=n;i++){
        for(int j=1;j<=nst;j++){
            printf("*");
        }
        for(int k=1;k<=nsp;k++){
            printf(" ");
        }
        for(int j=1;j<=nst;j++){
            printf("*");
        }
        nsp+=2;
        nst--;
        printf("\n");
    }
}