#include<stdio.h>
int main(){
    int n;
    printf("eneter the no of lines :");
    scanf("%d",&n);
    int nsp=n/2;
    int nst=1;
    for(int j=1;j<=nsp+1;j++){
        printf(" ");

    }
    for(int i=1;i<=1;i++){
        printf("*");
    }
    printf("\n");
    for(int i=1;i<=n;i++){
        for(int j=1;j<=nsp;j++){
            printf(" ");

        }
        
        for(int j=1;j<=1;j++){
            printf("*");
        }
        for(int k=1;k<=nst;k++){
            printf(" ");
            
        }
        for(int j=1;j<=1;j++){
            printf("*");
        }
        if(i<=n/2){
            nsp--;
            nst+=2;
        }
        else{
            nsp++;
            nst-=2;
        }
        printf("\n");
    }
    for(int j=1;j<=nsp;j++){
            printf(" ");

        }
    for(int i=1;i<=1;i++){
        printf("*");
    }


    return 0;
}