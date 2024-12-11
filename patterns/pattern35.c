#include<stdio.h>
int main(){
    int n;
    printf("enter the no of lines :");
    scanf("%d",&n);
    int nsp=0;
    int nst=n-2;

    for(int i=1;i<=n;i++){
        for(int i=1;i<=nsp;i++){
            printf(" ");
        }
        
        
        for(int j=1;j<=nst;j++){
            printf("*");
        }
        for(int j=1;j<=nst;j++){
            printf("*");
        }
        
            
      
        if(i<=n/2 ){
            nsp++;
            nst--;
            
        }
        else{
            nsp--;
            nst++;
            
        }
       


      
        printf("\n");

    }
}