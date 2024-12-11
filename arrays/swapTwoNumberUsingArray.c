#include<stdio.h>
void func(int arr[] ){
    int a=arr[0];
    arr[0]=arr[1];
    arr[1]=a;

    return;
}
int main(){
    int arr[2]={1,2};

    printf("%d %d\n",arr[0],arr[1]);
    func(arr);
    printf("%d %d\n",arr[0],arr[1]);
   
}