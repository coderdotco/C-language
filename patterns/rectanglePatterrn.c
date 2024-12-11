#include<stdio.h>
int main(){
    int n;
    printf("Enter the no of rows :");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i==1 || j==1 || j==n || i==n ) printf("*");
            else printf(" ");
        }
        printf("\n");
    }
}