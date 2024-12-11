#include<stdio.h>
int main(){
    int n;
    printf("enter the no of lines :");
    scanf("%d",&n);
    for(int i=1;i<=2;i++){
        for(int j=1;j<=n;j++){
            printf("* ");
        }
        printf("\n");
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n/2-1;j++){
            printf("  ");

        }
        for(int j=1;j<=2;j++){
            printf("*");
        }
        printf("\n");
    }
}