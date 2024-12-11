#include<stdio.h>
//code to print alphabet A
int main(){
    int n;
    printf("enter the no of rows :");
    scanf("%d",&n);
    int nsp=n ;
    int nst=1;
    for(int i=1;i<=1;i++){
        for(int j=1;j<=nsp;j++){
            printf(" ");
        }
        for(int j=1;j<=1;j++){
            printf("*");
        }
       
        nsp--;
        printf("\n");

    }
    for(int i=1;i<=n-1;i++){
        for(int j=1;j<=nsp;j++){
            printf(" ");
        }
        for(int j=1;j<=1;j++){
            printf("*");
        }
        for(int j=1;j<=nst;j++){
            if(i==n/2 + 1){
                printf("*");
            }
            else{
            printf(" ");
            }
        }
        for(int j=1;j<=1;j++){
            printf("*");
        }
       
          
        nst+=2;
        nsp--;
        printf("\n");
       
            
    }
    
    
}

