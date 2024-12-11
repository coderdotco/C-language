#include<stdio.h>
int main(){
    int arr[5]={200,4,14,33,3};
    int max=arr[0];
    for(int i=1;i<=5;i++){
        if(max<arr[i]){
            max=arr[i];
        }

    }
    printf("%d",max);
}
