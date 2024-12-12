#include<stdio.h>
int main(){
    int arr[10]={1,3,2,5,9,4,10,6,7,8};
    int* ptr;
    for(int i=0;i<10;i++){
        ptr=arr;
        for(int j=0;j<10;j++){
            if(*(ptr + j) > *(ptr + j+1)){
                int temp = *(ptr+j);
                *(ptr+j) = *(ptr +j+1);
                *(ptr + j+1) =temp ;
            }
            
        }
    }
    ptr = arr; 

    for(int i=0;i<10;i++){
        printf("%d ",*(ptr + i));
    }

}