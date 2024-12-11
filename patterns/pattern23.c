#include<stdio.h>
int main (){
    int a=3;
    int b=1;
    int d;
    
    
    for(int i=1;i<=4;i++){
        int c=1;
        
        for(int j=1;j<=a;j++){
            printf(" ");

        }
        a--;
        
        for(int k=1;k<=b;k++){
            int d=c+64;
            printf("%c",d);
            c=c+1;
        }
        
        b=b+2;
        printf("\n");



    }

}