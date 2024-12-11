#include<stdio.h>
int main(){
    for(int i=1;i<=8;i++){
        int a=1;
        for(int j=1;j<=i;j++){
            int d=a+64;
            a++;
            if(i%2!=0){
                printf("%d ",j);

            }
            else
            printf("%c ",d);

        }
        printf("\n");
    }
}