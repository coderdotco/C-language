#include<stdio.h>
int main(){
    FILE* ptr = fopen("t2.dat","rb");

    fseek(ptr,0,SEEK_END);
    int f_size = ftell(ptr);
    fseek(ptr,0,SEEK_SET);
    int no_of_ele = f_size / sizeof(int);
    int arr[no_of_ele];
    fread(arr,sizeof(int),no_of_ele,ptr);
    for(int i=0;i<no_of_ele;i++){
        printf("%d",arr[i]);
    }

    
}