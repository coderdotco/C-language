#include<stdio.h>
void reverse(int arr[]){
   for(int i=0,j=7;i<=j;i++,j--){
    int temp=arr[i];
    arr[i]=arr[j];
    arr[j]=temp;

   }
}
void rotate(int arr[],int k){
    for(int i=0,j=k-1;i<=j;i++,j--){
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }
    for(int i=k,j=7;i<=j;i++,j--){
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }

}
int main(){
    
    int arr[8]={1,2,3,9,5,6,7,8};
    int k;
    printf("enter the value of k :");
    scanf("%d",&k);
    for(int i=0;i<8;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    reverse(arr);
    for(int i=0;i<8;i++){
        printf("%d ",arr[i]);
    }
    rotate(arr,k);
    printf("\n");
    for(int i=0;i<8;i++){
        printf("%d ",arr[i]);
    }


    
}