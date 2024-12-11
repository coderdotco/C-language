#include<stdio.h>
int main(){
    int n;
    printf("enter no of lines :");
    scanf("%d",&n);
    for(int i=1;i<=n+1;i++){
        printf("* ");
    }
    printf("\n");
    int nsp=0;
    int t=n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=nsp;j++){
            printf(" ");
        }
        for(int j=1;j<=1;j++){
            printf("*");
        }
        for(int k=1;k<=2*t-1;k++){
            printf(" ");
        }
        for(int j=1;j<=1;j++){
            printf("*");
        }
        
        nsp++;
        t--;
       
        printf("\n");
    }
    for(int i=1;i<=1;i++){
        for(int j=1;j<=n;j++ ){
            printf(" ");

        }
        for(int j=1;j<=1;j++){
            printf("*");
        }
    }
}