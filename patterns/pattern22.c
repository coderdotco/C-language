#include<stdio.h>
int main(){
    int a=3;
    int b=1;
    for(int i=1;i<=4;i++){
        
        for(int j=1;j<=a;j++){
            printf(" ");
        }
        a--;
        for(int k=1;k<=b;k++){
            printf("%d",k);
        }
        b=b+2;
        printf("\n");
    }
}