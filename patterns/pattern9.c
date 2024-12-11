#include<stdio.h>
int main(){
    for(int i=1;i<=4;i++){
        int a=1;
        for(int j=1;j<=i;j++){
        printf("%c ",a+64);
        a++;
        }
        printf("\n");
    }
   
    
    
    return 0;
}