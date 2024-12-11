#include<stdio.h>
int main(){
    int nsp=0;
    int nst=4;
    for(int i=1;i<=4;i++){
        for(int j=1;j<=nsp;j++){
            printf(" ");
        }
        for(int k=1;k<=nst;k++){
            printf("*");

        }
        nst--;
        nsp++;
        printf("\n");
    }
}