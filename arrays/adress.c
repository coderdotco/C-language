#include<stdio.h>
int main(){
    int arr[5]={2,4,5,3,4};
    for(int i=0;i<5;i++){
        printf("%p\n",&arr[i]);
    }
}