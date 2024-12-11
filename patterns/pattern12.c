#include<stdio.h>
int main(){
    int n,m;
    printf("enter the value of n and m:");
    scanf("%d%d",&n ,&m);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(i==n || j==m ||i==1 ||j==1)
            printf("*");
            else
            printf(" ");
        }
        printf("\n");
    }
}