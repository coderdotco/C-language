#include<stdio.h>
int main(){
    int n;
    printf("enter the no of lines :");
    scanf("%d",&n);
    int nsp=n-1;
    int nst=1;
    for(int i=1;i<=nsp+1;i++){
        printf(" ");
    }
    printf("*");
    printf("\n");
    for(int i=1;i<=n;i++){
        for(int j=1;j<=nsp;j++){
            printf(" ");

        }
        nsp--;
        for(int j=1;j<=1;j++){
            printf("*");
        }
        for(int k=1;k<=nst;k++){
            printf(" ");
        }
        nst+=2;
        for(int k=1;k<=1;k++){
            printf("*");
        }
        printf("\n");
    }
    for(int i=1;i<=2*n+1;i++){
        printf("*");
    }
}