#include<stdio.h>
int main(){
    int arr[8]={1,2,3,9,5,6,7,8};
    
    int max=arr[0];
    int smax=arr[0];
    for(int i=0;i<8;i++){
        if(max<arr[i]){
            max=arr[i];
        }
    }
    for(int i=0;i<8;i++){
        if(arr[i]<max){
            smax=arr[i];
        }
    }
    printf("%d",max);
    printf("\n%d",smax);
}