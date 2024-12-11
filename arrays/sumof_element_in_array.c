#include<stdio.h>
int main(){
    int arr[5];
    int sum=0;
    for(int i=0;i<5;i++){
        scanf("%d",&arr[i]);
    }
    printf("\n");
    for(int i=0;i<5;i++){
        sum=sum+arr[i];
    }
    printf("the sum of all the element of array are %d",sum);
}