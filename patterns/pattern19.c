#include<stdio.h>
int main(){
    int b;
    printf("enter the lines :");
    scanf("%d",&b);

    int n=b/2;
    int a=1;
    for(int i=1;i<=b;i++){
        
        for(int k=1;k<=n;k++){//spaces
            printf(" ");
        }
        
        
        for(int j=1;j<=a;j++){//stars
            printf("*");

        
        }
        if (i<(b/2)+1){
            n--;
            a+=2;
        }
        else{
            a-=2;
            n++;
        }
        printf("\n");
    }
}