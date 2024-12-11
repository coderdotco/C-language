#include<stdio.h>
void reverse(int arr[]){
    int i=0,j=7;
    while(i<j){
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        i++;
        j--;
    }
}
int main(){
    
    int arr[8]={1,2,3,9,5,6,7,8};
    
    reverse(arr);
    for(int i=0;i<8;i++){
        printf("%d ",arr[i]);
    }

    
}