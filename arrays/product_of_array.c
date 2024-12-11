#include<stdio.h>
int main(){
    int arr[5];
    int product=1;
    for(int i=0;i<5;i++){
        scanf("%d",&arr[i]);
    }
    printf("\n");
    for(int i=0;i<5;i++){
        product=product*arr[i];
    }
    printf("the product of all the element of array are %d",product);
}