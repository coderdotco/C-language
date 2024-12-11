#include<stdio.h>
int main(){
    FILE* ptr=fopen("t2.dat","wb");
    // we use fwrite()  to write a binary file  
    // fwrite(<what to write>,<sizeof each elements>,<no of elemnents>,<file pointer>);

    int arr[]={1,2,3,4,5};
    fwrite(arr,sizeof(arr[0]),sizeof(arr)/sizeof(arr[0]),ptr);




}