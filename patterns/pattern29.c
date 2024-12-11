#include<stdio.h>
int main(){
    int n;
    printf("enter the no of lines: ");
    scanf("%d",&n);
    int nsp=n-1;
    
        
    for(int i=1;i<=n;i++){
        int val=1;
        for(int j=1;j<=nsp;j++){
            printf(" ");
        }
        nsp--;
        for(int k=1;k<=i;k++){
            printf("%d ",val);
            val=val *(i-k)/(k);
        }
        


        printf("\n");
    }
    
}