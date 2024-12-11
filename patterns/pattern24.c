#include<stdio.h>
int main(){
    int nsp=3;
   
    for(int i=1;i<=4;i++){
        int d=i-1;
        for(int b=1;b<=nsp;b++){
            printf(" ");
        }
        nsp--;
        
        for(int j=1;j<=i;j++){
            printf("%d ",j);
              
        }
        for(int k=1;k<=i-1;k++){
            
            printf("%d ",d);
            d--;
        }
       
        printf("\n");
    }   


}