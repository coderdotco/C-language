#include<stdio.h>
int main(){
    int arr[8]={1,2,3,4,4,6,7,5};
    int x=arr[0];
    for(int i=0;i<8;i++){
        for(int j=i+1;j<8;j++){
            if(arr[i]==arr[j]){
                printf("dulpicate element is %d",arr[i]);
                break;
            }
        }
        
    }
    
}