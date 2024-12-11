#include<stdio.h>
void func(int arr[] ){
    arr[0]=44;
    return;
}
int main(){
    int arr[5]={1,2,3,4,5};
    printf("%d\n",arr[0]);
    func(arr);
    printf("%d",arr[0]);
}
//which means array hamesha function mai pass hua toh pass by refernce hota hai na ki pass by value