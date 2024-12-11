#include<stdio.h>
int main(){
    int arr[5];
    for(int i=0;i<5;i++){
        printf("enter the %dth element of array ",i+1);
        scanf("%d",&arr[i]);
    }
    printf("%d",arr[2]);
}