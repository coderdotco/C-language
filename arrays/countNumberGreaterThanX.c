#include<stdio.h>
int main(){
    int count=0;
    int arr[5]={1,4,3,5,7};
    int x;
    printf("enter the number x :");
    scanf("%d",&x);
    for(int i=0;i<5;i++){
        if(arr[i]>x) count++;
    }
    printf("\nno of element in array greater than %d is %d",x,count);
}