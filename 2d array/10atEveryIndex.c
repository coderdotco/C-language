#include<stdio.h>
int main(){
    int arr[5][5];
    for(int i=0;i<5;i++){
        for(int j=0;j<4;j++){
            arr[i][j]=10;
        }
    }
    for(int i=0;i<5;i++){
        for(int j=0;j<4;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;

}