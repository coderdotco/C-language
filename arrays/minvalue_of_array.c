#include<stdio.h>
int main(){
    int arr[5]={2,4,14,33,1};
    int min=arr[0];
    for(int i=1;i<=5;i++){
        if(min>arr[i])
            min=arr[i];
    }
    printf("min=%d",min);
}