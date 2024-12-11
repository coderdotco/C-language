#include<stdio.h>
int main(){
    int arr[8]={1,2,3,9,5,6,7,8};
    int arc[8];
    for(int i=0;i<8;i++){
        arc[i]=arr[7-i];
    }
    for(int i=0;i<8;i++){
        printf("%d ",arc[i]);
    }
}