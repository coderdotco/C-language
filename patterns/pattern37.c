#include<stdio.h>
int main(){
    int n;
    printf("enter the no of rows :");
    scanf("%d",&n);
    int nst=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=nst;j++){
            printf("*");
        }
        if(i<=n/2){
            nst++;
        }
        else{
            nst--;
        }
       
        printf("\n");
    }
    

}