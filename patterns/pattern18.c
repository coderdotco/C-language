#include<stdio.h>
int main(){
    int i, n=4;
    int a=1;
    for(int i=1;i<=4;i++){
        for(int k=1;k<=n-i;k++){
            printf(" ");
        }
              
        for(int j=1;j<=a;j++){
            printf("*");
        }
        a=a+2;
        printf("\n");
    }   
}