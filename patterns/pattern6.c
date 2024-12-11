#include<stdio.h>
int main(){
    int a=4;
    for(int i=1;i<=4;i++){
        for (int j=1;j<=a;j++){
            printf("%d",j);
        }
        a--;
        printf("\n");
    }
   
    
    
    return 0;
}