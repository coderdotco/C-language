#include<stdio.h>
int main(){
    int arr[5];
    for(int i=0;i<5;i++){
        printf("enter the elemnt no %d",i);
        scanf("%d",&arr[i]);
    }
    printf("\n");
    for(int i=0;i<5;i++){
        printf(" %d\n",arr[4-i]);
    }
}